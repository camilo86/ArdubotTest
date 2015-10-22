#include <AFMotor.h>

AF_DCMotor leftDrive(); // Put your left drive port here
AF_DCMotor rightDrive() // Put your right drive port here

void setup() {
  Serial.begin(9600);
}

void loop() {
  leftDrive.run(FORWARD);
  rightDrive.run(BACKWARD);
  leftDrive.setSpeed(255);
  rightDrive.setSpeed(255);

}
