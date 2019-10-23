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

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
  pinMode(PIN_LED3, OUTPUT);
  pinMode(PIN_LED4, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(PIN_BUTTON1, INPUT);
  pinMode(PIN_BUTTON2, INPUT);
  pinMode(PIN_BUTTON3, INPUT);
  pinMode(PIN_BUTTON4, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(PIN_BUTTON1);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(PIN_LED1,HIGH );
  } else {
    // turn LED off:
    digitalWrite(PIN_LED1, LOW);
  }
   buttonState = digitalRead(PIN_BUTTON2);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(PIN_LED2, HIGH);
  } else {
    // turn LED off:
    digitalWrite(PIN_LED2, LOW);
  }
 buttonState = digitalRead(PIN_BUTTON3);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(PIN_LED3, HIGH);
  } else {
    // turn LED off:
    digitalWrite(PIN_LED3, LOW);
  }
 buttonState = digitalRead(PIN_BUTTON4);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(PIN_LED4, HIGH);
  } else {
    // turn LED off:
    digitalWrite(PIN_LED4, LOW);
  }
  

  
}
