int myArray[] = {8,9,10};
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

}
