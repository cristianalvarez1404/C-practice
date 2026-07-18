#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

#define BLINK_MS 150

int main() {
  //setup up here - Put B5 in output mode
  //DDRB |= 0b00100000;
  DDRB |= _BV(PORTB5);

  while(true){
    //Toggle the LED
    PORTB ^= _BV(PORTB5);
    _delay_ms(BLINK_MS);
  }
}

int main() {
  //setup up here - Put B5 in output mode
  //DDRB |= 0b00100000;
  DDRB |= _BV(PORTB5);

  while(true){
    //repetitive stuff here - Turn on the LED
    // PORTB |= 0b00100000;
    PORTB |= _BV(PORTB5);
    _delay_ms(BLINK_MS);

    // PORTB &= ~0b00100000; - Turn off the LED
    PORTB &= ~_BV(PORTB5);
    _delay_ms(BLINK_MS);
  }
}