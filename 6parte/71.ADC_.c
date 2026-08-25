#include <msp430.h>
#include <stdint.h>

#define REFMVOLTS 3300
#define THRESHOLD_MV 1000
#define ADC_RESOLUTION_BITS 12 //bits

void ADC_config(){
  P1SEL1 |= BIT3;
  P1SEL0 |= BIT3;

  ADC12CTL0 = ADC12SHT0_2 | ADC12ON;
  ADC12CTL1 = ADC12SHP;
  ADC12CTL2 |= ADC12RES_2;

  ADC12MCTL0 |= ADC12INCH_3;
}

int16_t ADC_read() {
  ADC12CTL0 |= ADC12ENC | ADC12SC;

  while(ADC12CTL1 & ADC12BUSY);

  return ADC12MEMO;
}

int32_t ADC_counts_to_mV(int16_t counts) {
  return ((int32_t)counts * REFMVOLTS)/(1 << ADC_RESOLUTION_BITS);
}

int main(void)
{
  float volts;
  int32_t ADC_value = 0; 

  WDTCTL = WDTPW + WDTHOLD; // stop watchdog timer
  PM5CTL0 &= ~LOCKLPM5;

  //set pin 1.0 as output (LED)
  P1DIR |= BIT0;
  P1OUT &= ~BIT0; // clear pin 1.0 (make it low)

  ADC_config();

  for(;;){
    //delay between samples
    __delay_cycles(100000);
    int mV = ADC_counts_to_mV(ADC_read());

    if(mV < THRESHOLD_MV) {
      P1OUT |= BIT0; //led on
    }else {
      P1OUT &= ~BIT0; //led off
    }
  }
}