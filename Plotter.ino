#include <Arduino.h>
#include "include\plotter.h"
#include "include\vector2.h"

stepper s1(0,1,2,3);
stepper s2(4,5,6,7);
plotter p(s1,s2,11,11);

void setup(){
	Serial.begin(9600);
	int a = 10,b = 5;
	p.setDest(vector2i(a,b));
	for(int i = 0;i < 100;i++){
        p.update();
        //Serial.println(String(p.current.x)+"|"+String(p.current.y));
	}
}

void loop(){
	
	
}
