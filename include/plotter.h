#ifndef PLOTTER_H
#define PLOTTER_H
#include "include\vector.h"
#include "include\stepper.h"

typedef unsigned int uint;

struct plotter{
private:
    vector2i source;
    vector2i dest;
    vector2i current;
    stepper x,z;
    int maxx,maxz;
public:
    plotter(stepper x,stepper z,int maxx,int maxz);
    double dist(vector2i A,vector2i B);
    double distpl(vector2i A,vector2i B,vector2i Point);
    vector2i move(vector2i source,vector2i dest,vector2i current);
    char update();
    char setDest(vector2i dest);
};

#endif // PHEAD_H
