#include "L2.hpp"


void L2 :: L298N_init(int IN1, int IN2, int ENA){

pinMode(IN1,OUTPUT);
pinMode(IN2,OUTPUT);
pinMode(ENA,OUTPUT);

}

void L2 :: L298N_drive(int IN1, int IN2, int ENA, int speed_in_pwm){

//to move forward
if(speed_in_pwm>0){
digitalWrite(IN1,HIGH);
digitalWrite(IN2,LOW);
}
else if(speed_in_pwm<0){
//to move backward
digitalWrite(IN1,LOW);
digitalWrite(IN2,HIGH);
}
else {
  //stop the motor
  analogWrite(EN,O);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
}
//set speed
analogWrite(EN,abs(speed_in_pwm));
}