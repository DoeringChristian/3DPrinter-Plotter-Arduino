#ifndef PRINTER_H
#define PRINTER_H
#include "include\plotter.h"

class Printer{
public:
    int y = 0;
    int mult = 1;
    stepper x;
    stepper y;
    stepper z;
    Printer(stepper x,stepper y,stepper z,int maxx,int maxy,int maxz);
    char drawline(int x1,int y1,int x2,int y2);
    char moveUpwards();
    char moveDownwards();
};

#endif // PRINTER_H
