/*
   Project: Toggle Button Knight Rider
   Description: Press once to start, press again to stop.
   Author: Zeynep Sude Aydın
*/

int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
int buttonPin = 10;

bool isRunning = false;
int lastButtonState = LOW;
int currentButtonState = LOW;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);
}

void loop() {
  currentButtonState = digitalRead(buttonPin);

  if (lastButtonState == LOW && currentButtonState == HIGH) {
    isRunning = !isRunning;
    delay(50);
  }

  lastButtonState = currentButtonState;

  if (isRunning) {
    runChaserStepByStep();
  } else {
    allLedsOff(); //
  }
}

void runChaserStepByStep() {
  static int currentLed = 0;
  static int direction = 1;

  allLedsOff(); // Önce hepsini kapat
  digitalWrite(ledPins[currentLed], HIGH);

  delay(70);

  currentLed += direction;

  if (currentLed >= 7) {
    direction = -1;
  } else if (currentLed <= 0) {
    direction = 1;
  }
}

void allLedsOff() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}
