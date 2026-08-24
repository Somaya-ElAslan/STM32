#include "BTS.hpp"

void Bts::BTS_init(int RPWM, int LPWM){

  pinMode(RPWM,OUTPUT);
  pinMode(LPWM,OUTPUT);
}

void Bts::BTS_drive(int RPWM, int LPWM, int speed_in_pwm){

//move forward
if(speed_in_pwm>0){
analogWrite(RPWM,speed_in_pwm);
analogWrite(LPWM,0);
}

//to move backward
else if(speed_in_pwm<0){
analogWrite(RPWM,0);
analogWrite(LPWM,speed_in_pwm);

}
else {
  //stop the motor
analogWrite(RPWM,0);
analogWrite(LPWM,0);
 
 }

}




