#include "vector2i.h"

vector2i::vector2i(int x,int y){
    this->x = x;
    this->y = y;
}
vector2i::vector2i(){
    x = 0;
    y = 0;
}

/*vector2i::vector2i(vector2i &copy){
    this->x = copy.x;
    this->y = copy.y;
}*/

vector2i vector2i::operator+(const vector2i &toadd) const{
    return vector2i(this->x+toadd.x,this->y+toadd.y);
}
vector2i vector2i::operator-(const vector2i &tosub) const{
    return vector2i(this->x-tosub.x,this->y-tosub.y);
}
vector2i vector2i::operator*(int tomult) const{
    return vector2i(this->x*tomult,this->y*tomult);
}

void vector2i::operator+=(const vector2i &toadd){
    this->x += toadd.x;
    this->y += toadd.y;
}
void vector2i::operator-=(const vector2i &tosub){
    this->x -= tosub.x;
    this->y -= tosub.y;
}
void vector2i::operator*=(int tomult){
    this->x *= tomult;
    this->y *= tomult;
}

void vector2i::operator=(const vector2i &s){
    this->x = s.x;
    this->y = s.y;
}
