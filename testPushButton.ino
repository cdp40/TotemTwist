/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/


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

        
    digitalWrite(green, HIGH);
    
    // turn success (green) LED on:
//    tone(9, 432);
//    //noTone(9);
//    delay(100);
//        tone(9, 600);
//        //noTone(9);
//        delay(100);
//            tone(9, 900);
//            //noTone(9);
//            delay(100);
                tone(9, 1200,100);
                tone(9, 2400,100);

            noTone(9);


  } else {
    
    // turn LED off:
    digitalWrite(green, LOW);
    digitalWrite(red, LOW);
    
  }
}
