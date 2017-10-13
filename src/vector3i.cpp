#include "vector3i.h"

vector3i::vector3i(int x,int y,int z){
    this->x = x;
    this->y = y;
    this->z = z;
}

vector3i vector3i::operator+(const vector3i &toadd) const{
    return vector3i(this->x+toadd.x,this->y+toadd.y,this->z+toadd.z);
}
vector3i vector3i::operator-(const vector3i &tosub) const{
    return vector3i(this->x-tosub.x,this->y-tosub.y,this->z-tosub.z);
}
vector3i vector3i::operator*(int tomult) const{
    return vector3i(this->x*tomult,this->y*tomult,this->z*tomult);
}

void vector3i::operator+=(const vector3i &toadd){
    this->x += toadd.x;
    this->y += toadd.y;
    this->z += toadd.z;
}
void vector3i::operator-=(const vector3i &tosub){
    this->x -= tosub.x;
    this->y -= tosub.y;
    this->z -= tosub.z;
}

void vector3i::operator*=(int tomult){
    this->x *= tomult;
    this->y *= tomult;
    this->z *= tomult;
}
