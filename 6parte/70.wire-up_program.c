#include <msp430.h>
#include <stdbool.h>

#define COUNTER_VALUE 500

void start_timer() {
  // Setup the timer
  TA0CCTL0 = CCIE;
  TA0CCR0 = COUNTER_VALUE;
  TA0CTL = TASSEL_ACLK + MC__UP + ID__8;
  TA0CTL |= TAIE;
}

int main(void) {

  //stop the watchdog timer
  WDTCTL = WDTPW | WDTHOLD;
  //allow changes to port registers
  PM5CTL0 &= ~LOCKLPM5;

  //Select ACLK to use VLO clock source
  CSCTL0_H = CSKEY_H;
  CSCTL_2 |= SELA__VLOCLK;
  CSCTL0_H = 0;

  P1DIR |= BIT0; // set pin 1.0 as output
  P1OUT &= ~BIT0; // clear pin 1.0 (make it low)
  
  P1DIR |= BIT1; // set pin 1.1 as output
  P1OUT &= ~BIT1; // set pin 1.1 (make it hight)

  P5DIR &= ~BIT6; //pin 5.6 input
  P5REN |= BIT6; //enable pull-up/down resistor on 5.6
  P5OUT |= BIT6; //make it a pull UP

  start_timer();

  while(true){
    _BIS_SR(LPM3_bits + GIE);
  }
}

void __attribute__((interrupt(TIMER0_A0_VECTOR))) Timer_A(void) {

  // toggle the leads
  if(P5IN & BIT6) {
    P1OUT ^= BIT0;
  }
  P1OUT ^= BIT1;

  // reset the timer
  TA0CTL |= TACLR;
}