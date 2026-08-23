#ifndef L2_HPP
#define L2_HPP

class L2(){

private:
int _IN1,_IN2,EN,_speed_in_pwm;

public:
L298N_drive(int IN1, int IN2, int ENA, int speed_in_pwm);
L298N_init(int IN1, int IN2, int ENA);

}; 

#endif
