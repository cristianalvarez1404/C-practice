#include <util/delay.h>
#include <stdbool.h>
#include <avr/io.h>
#include <avr/interrupt.h>


#define PRESCALAR 10 // 10 bits...1024

#define BLINK_MS 150

#define CLOCK_RATE 15998976

//roughly the number of timer ticks in a second
#define COUNTER_VALUE (CLOCK_RATE >> PRESCALAR)

// TIMER1 compare interrupt service routine
// fires when conter value matches OCR1A
ISR(TIMER1_COMPA_vect){
  PORTB ^= _BV(PORTB5);
}
 
int main() {

  //Put B5 in output mode
  DDRB |= _BV(PORTB5);

  //configure timer
  OCR1A= COUNTER_VALUE;

  TCCR1A = 0x00;
  TCCR1B |= (1 << WGM12); //CTC Mode -- compare to OCR1A
  TCCR1B |= (1 << CS10) | (1 << CS12); //Set prescaler to 1024

  //I want an interrupt
  TIMSK1 |= (1 << OCIE1A);

  //enable interrupts
  sei();

  while(true){
    // do somethig useful in here while we are wating for the timer to fire

  }
}