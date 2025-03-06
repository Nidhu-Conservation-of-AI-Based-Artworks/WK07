int ledState;
long lastChange;

void setup() {
  // TODO: declare output pin
  pinMode(3, OUTPUT);
  ledState = LOW;
  // ledState = HIGH;
  lastChange = millis();
}

void loop() {
  // TODO: change output value every X seconds
  digitalWrite(3, ledState);

  if (millis() - lastChange > 500) {
    ledState = !ledState;
    lastChange = millis();
  }
}

