#include L2.hpp


L2 :: L298N_init(int IN1, int IN2, int ENA);{
this->_IN1=IN1;
this->_IN2=IN2;
this->_speed_in_pwm->speed_in_pwm;
cout << "Enter direction 1 ";
cin >> IN1;
cout << "Enter direction 2 ";
cin >> IN2;
cout << "Enter the speed";
cin >> ENA;
PINMODE(IN1,OUTPUT);
PINMODE(IN2,OUTPUT);
PINMODE(ENA,OUTPUT);

}

void L2 :: L298N_drive(int IN1, int IN2, int ENA, int speed_in_pwm){
this->_IN1=IN1;
this->_IN2=IN2;
this->_speed_in_pwm->speed_in_pwm;
}