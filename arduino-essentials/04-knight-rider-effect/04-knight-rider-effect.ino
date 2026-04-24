int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
int pinCount = sizeof(ledPins) / sizeof(int); 

void setup() {
  for (int i = 0; i < pinCount; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < pinCount; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
  for (int i = pinCount - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}
