int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}

//----------------------------------------------------------
// Arduino Uno - MSP430FR5969 - Microcontroller
/*
  We need 2 things:
    - Cross compiler => It's like GCC or clang, but for ARD or MSP
    - Get the code onto the microcontroller example => AVR DUDE
*/






