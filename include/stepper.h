#ifndef STEPPER_H
#define STEPPER_H
#include <Arduino.h>

#define STEPS_PER_REV 8

const static char steppermask[STEPS_PER_REV][4] =  {{1,0,0,0},
                                                    {1,0,1,0},
                                                    {0,0,1,0},
                                                    {0,1,1,0},
                                                    {0,1,0,0},
                                                    {0,1,0,1},
                                                    {0,0,0,1},
                                                    {1,0,0,1}};



class stepper{
    unsigned char step;
    unsigned int pins[4];
public:
    stepper();
    stepper(unsigned int pin1,unsigned int pin2,unsigned int pin3,unsigned int pin4);
    void stepBackwards();
    void stepForwards();
    void update();
};

#endif // SERVO_H
