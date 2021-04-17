// Include PCM.h to use the library needed to play audio through PWM
#include <PCM.h>

// Include Wire.h to use the library needed to use I2C to communicate with display
#include <Wire.h>


// constants won't change. They're used here to set pin numbers:
const int push1 = 5;     //Tthe number of the first pushbutton pin
const int push2 = 6;     // The number of the second pushbutton pin
const int red = 7;       // The number of the red output LED pin
const int green = 8;     // The number of the green output LED pin

// variables will change:
int buttonState1 = 1;         // variable for reading the first pushbutton status
int buttonState2 = 1;         // Variable for reading the second pushbutton status

void setup() {
  
  // initialize the LED pins as an output:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  
  // initialize the pushbutton pins as an input:
  pinMode(push1, INPUT);
  pinMode(push2, INPUT);
}

void loop() {
  
  // read the states of the pushbutton values:
  buttonState1 = digitalRead(push1);
  buttonState2 = digitalRead(push2);

  // check if the both pushbuttons are pressed. If they are, the buttonState is LOW (pull up resistors):
  if (buttonState1 == LOW && buttonState2 == LOW) {

    // turn success (green) LED on:
    digitalWrite(green, HIGH);

    
    // Play First tone
    tone(9, 432);
    delay(100);

    // Play Second tone
    tone(9, 600);
    //noTone(9);
    delay(100);

    // Play Third tone
    tone(9, 900);
    delay(100);

    // Stop playing tones
    noTone(9);

  } else {
    
    // turn LED off:
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    
  }
}
