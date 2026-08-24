#include "L2.hpp"

L2 motor1;
Cytron motor2;

void setup() {
  // put your setup code here, to run once:
motor1.L298N_init(PA0, PA1, PA5);
motor2.Cytron_init(PA2, PA6);
}

void loop() {
  // put your main code here, to run repeatedly:
motor1.L298N_drive(PA0, PA1, PA5, 100); //move forward
motor1.L298N_drive(PA0, PA1, PA5, -100); //move backward
motor1.L298N_drive(PA0, PA1, PA5, 0); //stop

motor2.Cytron_drive(PA2,PA6,100); //move forward
motor2.Cytron_drive(PA2,PA6,-100); //move backward
motor2.Cytron_drive(PA2,PA6,0); //stop

}
