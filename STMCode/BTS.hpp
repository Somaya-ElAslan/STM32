#ifndef BTS_HPP
#define BTS_HPP
#include <Arduino.h>

class Bts{

public:
void BTS_drive(int RPWM, int LPWM, int speed_in_pwm);
void BTS_init(int RPWM, int LPWM);


};

#endif