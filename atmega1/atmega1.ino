int myArray[] = {8,9,10,11,12,13,1,2,3,4,5,6};
int arraySize = 12;

void setup() {
  // set digital pins to output
  for (int i = 0; i < arraySize; i++) {
    pinMode(myArray[i], OUTPUT);
  }

  // set pin 7 for second arduino
  pinMode(7, OUTPUT);

}

void loop() {
  // loop over pins
  for (int i = 0; i < arraySize; i++) {
    // keep one for 5 seconds
    digitalWrite(myArray[i], HIGH);
    delay(5000);

    // turn off for one second
    digitalWrite(myArray[i], LOW);
    delay(1000);

  }

  // set digital pin 7 high and delay
  digitalWrite(7, HIGH);
  delay(18000);
  digitalWrite(7, LOW);

}
