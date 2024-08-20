int myArray[] = {8,9,10,11};
int arraySize = 3;

void setup() {
  // set digital pins to output
  for (int i = 0; i < arraySize; i++) {
    pinMode(myArray[i], OUTPUT);
  }

  // set analog pin to input
  pinMode(A5, INPUT);

}

void loop() {
  // customize functionality for pwm in 11
  analogWrite(11, 71);                  // set the analogWrite of pin 11 to 1.4 volts

  // loop over pins
  if (analogRead(A5) > 512) {
    for (int i = 0; i < arraySize; i++) {
      // keep one for 5 seconds
      digitalWrite(myArray[i], HIGH);
      delay(5000);

      // turn off for one second
      digitalWrite(myArray[i], LOW);
      delay(1000);

    }
  }

  // fcusotmize unctionality for pwm in 11
  analogWrite(11, 0);                  // set the analogWrite of pin 11 to 0 volts when script finishes

}
