void setup() {
  // TODO: create serial object
  Serial.begin(9600);
}

void loop() {
  // TODO: read analog and output to serial
  int a1 = analogRead(A1);
  Serial.println(a1);
}