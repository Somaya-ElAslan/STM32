#include "L2.hpp"
#include "Cytron.hpp"
#include "BTS.hpp"

L2 motor1;
Cytron motor2;
Bts motor3;

void setup() {

motor1.L298N_init(PA0, PA1, PA5);
motor2.Cytron_init(PA2, PA6);
motor3.BTS_init(PA7, PA8);
}

void loop() {

motor1.L298N_drive(PA0, PA1, PA5, 100); //move forward
motor1.L298N_drive(PA0, PA1, PA5, -100); //move backward
motor1.L298N_drive(PA0, PA1, PA5, 0); //stop

motor2.Cytron_drive(PA2,PA6,100); //move forward
motor2.Cytron_drive(PA2,PA6,-100); //move backward
motor2.Cytron_drive(PA2,PA6,0); //stop

motor3.BTS_drive(PA7, PA8, 100); //move forward
motor3.BTS_drive(PA7, PA8, -100); //move backward
motor3.BTS_drive(PA7, PA8, 0); //stop

}
