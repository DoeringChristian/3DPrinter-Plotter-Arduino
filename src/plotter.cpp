#include "plotter.h"


plotter::plotter(stepper x,stepper z,int maxx,int maxz){
    this->x = x;
    this->z = z;
    this->maxx = maxx;
    this->maxz = maxz;
}

double plotter::dist(vector2i A,vector2i B){
    return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}

double plotter::distpl(vector2i A,vector2i B,vector2i Point){
    return sqrt(pow(A.x*(B.y-Point.y)+B.x*(Point.y-A.y)+Point.x*(A.y-B.y),2))/dist(A,B);
}

vector2i plotter::move(vector2i sourcce,vector2i dest,vector2i current){
    if(current.x == dest.x && current.y == dest.y){
        return vector2i(0,0);
    }
    else{
        double mindist = -1;
        int fx = 0,fy = 0;
        for(int x = -1;x < 2;x++){
            for(int y = -1;y < 2;y++){
                if(x != 0 || y != 0){
                    double distp = distpl(sourcce,dest,vector2i(current.x+x,current.y+y));
                    double distdc = dist(dest,current);
                    double distdn = dist(dest,vector2i(current.x+x,current.y+y));
                    if(distdn < distdc && (distp < mindist || mindist == -1)){
                        mindist = distp;
                        fx = x;
                        fy = y;
                    }
                }
            }
        }
        return vector2i(fx,fy);
    }
}

char plotter::update(){
    vector2i moved(0,0);
    if(dest.x >= 0 && dest.x < maxx && dest.y >= 0 && dest.y < maxz)
        moved = move(source,dest,current);
    else 
        return 2;
    if(moved.x == 0 && moved.y == 0)
        return 1;
    else{
        if(moved.x > 0)
            x.stepForwards();
        else if(moved.x < 0)
            x.stepBackwards();
        if(moved.y > 0)
            z.stepForwards();
        else if(moved.y < 0)
            z.stepBackwards();
        current += moved;
    }
    return 0;
}
char plotter::setDest(vector2i dest){
    if(dest.x >= 0 && dest.x < maxx && dest.y >= 0 && dest.y < maxz){
        source = current;
        this->dest = dest;
    }
    else
        return -1;
}










