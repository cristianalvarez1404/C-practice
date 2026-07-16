#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>

#define BLINK_MS 150

int main() {
  //setup up here
  DDRB |= 0b00100000;

  while(true){
    //repetitive stuff here
    PORTB |= 0b00100000;
    _delay_ms(BLINK_MS);

    PORTB &= ~0b00100000;
  }
}