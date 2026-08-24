#ifndef L2_HPP
#define L2_HPP
#include <Arduino.h>

class L2{


public:
void L298N_drive(int IN1, int IN2, int ENA, int speed_in_pwm);
void L298N_init(int IN1, int IN2, int ENA);

}; 

#endif
