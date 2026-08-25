#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

#define BLINK_CYCLES 500000L
#define COUNTER_VALUE 1250

int main(void) {

  // stop the watchdog timer
  WDTCTL = WDTPW | WDTHOLD;
  // allow changes to port registers
  PM5CTL0 &= ~LOCKLPM5;

  //Select ACLK to use VLO clock source
  CSCTL0_H = CSKEY_H;
  CSCTL2 |= SELA_VLOCLK;
  CSCTL0_H = 0;

  P1DIR |= BIT0; //set pin 1.0 as output
  P1OUT &= ~BIT0; //clear pin 1.0 (make it low)

  P4DIR |= BIT6; //set pin 4.6 as output
  P4OUT |= BIT6; //set pin 4.6 (make it high)

  //Setup the timer
  TA0CCTL0 = CCIE;
  TA0CCR0 = COUNTER_VALUE;
  TA0CTL = TASSEL_ACLK + MC__UP + ID__8;
  TA0CTL |= TAIE;

  _BIS_SR(LPM3_bits + GIE);
  
  while(true){
    _delay_cycles(BLINK_CYCLES);
    P1OUT ^= BIT0; //toggle pin 1.0
    P4OUT ^= BIT6; //toggle pin 4.6
  }

}

void __attribute__ ((interrupt(TIMER0_A0_VECTOR))) Timer_A(void) {
  //toggle the leds
  P1OUT ^= BIT0;
  P4OUT ^= BIT6;

  //reset the timer
  TA0CTL |= TACLR;
}