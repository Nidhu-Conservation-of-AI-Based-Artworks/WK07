int ledState;
long lastChange;

void setup() {
  // TODO: declare output pin
  pinMode(3, OUTPUT);

  ledState = 0;
  // ledState = 1;
  lastChange = millis();
}

void loop() {
  // TODO: change output value every X seconds
  analogWrite(3, ledState);

  if (millis() - lastChange > 10) {
    ledState += 1;
    lastChange = millis();
    // USE IF NEEDED - IT WORKED WITHOUT THIS PART WHEN I RAN IT.
    // if (ledState > 255) {
    //   ledState = 0;
    // }
  }
}

