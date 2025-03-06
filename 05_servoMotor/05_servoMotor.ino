#include <Servo.h>

int inPin = A0;
int servoAngle = 0;
int servoVelocity = 2;
int lastChange = 0;
Servo mServo;

void setup() {
  Serial.begin(57600);
  mServo.attach(inPin);
}

void loop() {
  // int a0Val = analogRead(inPin);
  // analogWrite(A0, servoAngle);

  if (millis() - lastChange > 15) {
    servoAngle += servoVelocity;
    lastChange = millis();
    if (servoAngle > 180 || servoAngle<0) {
      servoVelocity = -servoVelocity;
    }
  }

  // write the angle to the motor
  mServo.write(servoAngle);
}
