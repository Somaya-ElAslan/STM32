#include "L2.hpp"

L2 motor1;

void setup() {
  // put your setup code here, to run once:
motor1.L298N_init(PA0, PA1, PA5);
}

void loop() {
  // put your main code here, to run repeatedly:
motor1.L298N_drive(PA0, PA1, PA5, 100);
motor1.L298N_drive(PA0, PA1, PA5, -100);
motor1.L298N_drive(PA0, PA1, PA5, 0);
}
