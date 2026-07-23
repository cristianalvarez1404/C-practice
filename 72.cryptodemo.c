#include <msp430fr5994.h>
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

//half a second at 1MHz
#define BLINK_CYCLES 500000L
#define KEYLENGTH 256 //bits in key
#define KEYLENGTH_BYTES (KEYLENGTH/8)
#define DATABLOCK_BYTES 16

void AES_setKey(bool encrypt, const uint8_t *key){
  uint8_t i;

  //set control bits for encrypt or decrypt mode
  if(encrypt){
    AESACTL0 &= (~(AESKL_1 + AESKL_2));
  }else {
    AESACTL0 &= ~(AESOP0);
    AESACTL0 |= AESOP1;
  }

  //set key length
  AESACTL0 |= AESKL__256;

  for(i = 0; i < KEYLENGTH_BYTES; i = i + 1){
    AESAKEY_L = key[i];
  }

  //wait for key to be written - handled different for encrypt/decrypt keys
  if(encrypt){
    while((AESASTAT & AESKEYWR) == 0x00);
  } else {
    while((AESASTAT & AESBUSY) == AESBUSY);
  }
}

void AES_doCipher(const uint8_t *srcdata, uint8_t *resultdata){
  uint8_t i;
  uint16_t tempData = 0;

  // Write data to encrypt to module
  for(i = 0; i < DATABLOCK_BYTES; i = i + 2) {
    uint16_t temp = 0;
    temp = (uint16_t)(srcdata[i]) | ((uint16_t)(srcdata[i + 1]) << 8);
    AESADIN = temp;
  }

  //Start the cipher operationby setting the AESKEYWR bit to 1
  AESASTAT |= AESKEYWR;

  //Wait until it finishes
  while(AESBUSY == (AESASTAT & AESBUSY));

  //Write encrypted data back to variable
  for(i = 0; i < DATABLOCK_BYTES; i = i + 2){
    tempData = AESADOUT;
    resultdata[i] = (uint8_t)tempData;
    resultdata[i+1] = (uint8_t)(tempData >> 8);
  }
}

void AES_encrypt(const uint8_t *data, uint8_t *encryptedData) {
  AESACTL0 &= ~AESOP_3;

  AES_doCipher(data, encryptedData);
}

void AES_decrypt(const uint8_t *ciphertext, uint8_t *decryptedData) {
  AESACTL0 |= ~(AESOP_3);

  AES_doCipher(ciphertext, decryptedData);
}

void AES_reset() {
  AESACTL0 |= AESSWRST; 
}

const uint8_t mykey[KEYLENGTH_BYTES] = {
                                          0x01,0x02,0x03,0x04,0X05,
                                          0x06,0x07,0x08,0x09,0X0A,
                                          0x0B,0x0C,0x0D,0x0E,0X0F,
                                          0x10,0x11,0x12,0x13,0X14,
                                          0x15,0x16,0x17,0x18,0X19,
                                          0x1A,0x1B,0x1C,0x1D,0X1E,
                                          0x1F,0x20,
                                        };

const uint8_t mydata[DATABLOCK_BYTES] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,0};
uint8_t ciphertext[DATABLOCK_BYTES] = {0};
uint8_t decryptedData[DATABLOCK_BYTES] = {0};

int main(void) {
  //stop the watchdog timer
  WDTCTL = WDTPW | WDTHOLD;

  //allow changes to port registers
  PM5CTL0 &= ~LOCKLPM5;

  P1DIR |= BIT0; // set pin 1.0 as output
  P1OUT &= ~BIT0; // clear pin 1.0 (make it low)
  
  P1DIR |= BIT1; // set pin 4.6 as output
  P1OUT |= ~BIT1; // clear pin 4.6 (make it high)

  //AES_reset() // turns out this seems to be unnecessary, at least for ECB.

  while(true) {
    memset(ciphertext, 3, DATABLOCK_BYTES);
    memset(decryptedData, 2, DATABLOCK_BYTES);
    AFS_setKey(true, mykey);
    AES_encrypt(mydata, ciphertext);
    AES_setKey(false, mykey);
    AES_decrypt(ciphertext, decryptedData);

    __delay_cycles(BLINK_CYCLES);
    //blink if they match.
    if(memcmp(mydata, decryptedData, DATABLOCK_BYTES) == 0){
      P1OUT ^= BIT0; //toggle pin 1.0
      P1OUT ^= BIT1; //toggle pin 1.1
    }
  }
}