#include <Wire.h>
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

Adafruit_AlphaNum4 alpha4 = Adafruit_AlphaNum4();

void setup() {

  // Came with example
  Serial.begin(9600);
  alpha4.begin(0x70);  // pass in the address

  // Create the character array that will be looped
  char message[] = "WELCOME TO TOTEM TWIST - PRESS TO START - ";

  while (true) {
    
    for (uint8_t i = 0; i <= sizeof(message)-5; i++) {
      alpha4.writeDigitAscii(0, message[i]);
      alpha4.writeDigitAscii(1, message[i+1]);
      alpha4.writeDigitAscii(2, message[i+2]);
      alpha4.writeDigitAscii(3, message[i+3]);
      alpha4.writeDisplay();
      delay(200);
    }

    alpha4.writeDigitAscii(0, ' ');
    alpha4.writeDigitAscii(1, '-');
    alpha4.writeDigitAscii(2, ' ');
    alpha4.writeDigitAscii(3, 'W');    
    alpha4.writeDisplay();
    delay(200);

    alpha4.writeDigitAscii(0, '-');
    alpha4.writeDigitAscii(1, ' ');
    alpha4.writeDigitAscii(2, 'W');
    alpha4.writeDigitAscii(3, 'E');    
    alpha4.writeDisplay();
    delay(200);

    alpha4.writeDigitAscii(0, ' ');
    alpha4.writeDigitAscii(1, 'W');
    alpha4.writeDigitAscii(2, 'E');
    alpha4.writeDigitAscii(3, 'L');    
    alpha4.writeDisplay();
    delay(200);
  
  }
  
}

void loop() {

}
