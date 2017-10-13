#include "stepper.h"

stepper::stepper(unsigned int pin1,unsigned int pin2,unsigned int pin3,unsigned int pin4){
    pins[0] = pin1;
    pins[1] = pin2;
    pins[2] = pin3;
    pins[3] = pin4;
    step = 0;
    update();
}
stepper::stepper(){
}

void stepper::update(){
    for(int i = 0;i < 4;i++){
        if(steppermask[step][i] != 0)
            digitalWrite(pins[i],HIGH);
        else
            digitalWrite(pins[i],LOW);
    }
}

void stepper::stepForwards(){
    if(step < STEPS_PER_REV-1)
        step++;
    else
        step = 0;
    update();
}
void stepper::stepBackwards(){
    if(step > 0)
        step--;
    else
        step = STEPS_PER_REV-1;
    update();
}
