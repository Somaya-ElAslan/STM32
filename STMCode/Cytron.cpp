#include "Cytron.hpp"

void Cytron::Cytron_init(int DIR, int PWM){
pinMode(DIR,OUTPUT);
pinMode(PWM,OUTPUT);

}

void Cytron::Cytron_drive(int DIR, int PWM, int speed_in_pwm){

//to move forward
if(speed_in_pwm>0){
digitalWrite(DIR,HIGH);

}
//to move backward
else if(speed_in_pwm<0){
digitalWrite(DIR,LOW);

}
else {
  //stop the motor
  digitalWrite(DIR,LOW);
 analogWrite(PWM,0);
 
}
//set speed
analogWrite(PWM,abs(speed_in_pwm));
}


