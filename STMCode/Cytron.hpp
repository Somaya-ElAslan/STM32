#ifndef CYTRON_HPP
#define CYTRON_HPP
#include <Arduino.h>

class Cytron{

public:

void Cytron_drive(int DIR,int PWM,int speed_in_pwm);
void Cytron_init(int DIR, int PWM);

};

#endif