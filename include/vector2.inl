#include "vector2.h"

template <typename T>
vector2<T>::vector2(T x,T y){
    this->x = x;
    this->y = y;
}
template <typename T>
vector2<T>::vector2(){
    x = 0;
    y = 0;
}

/*vector2i::vector2i(vector2i &copy){
    this->x = copy.x;
    this->y = copy.y;
}*/
template <typename T>
vector2<T> vector2<T>::operator+(const vector2<T> &toadd) const{
    return vector2<T>(this->x+toadd.x,this->y+toadd.y);
}
template <typename T>
vector2<T> vector2<T>::operator-(const vector2<T> &tosub) const{
    return vector2(this->x-tosub.x,this->y-tosub.y);
}
template <typename T>
vector2<T> vector2<T>::operator*(T tomult) const{
    return vector2(this->x*tomult,this->y*tomult);
}

template <typename T>
void vector2<T>::operator+=(const vector2<T> &toadd){
    this->x += toadd.x;
    this->y += toadd.y;
}
template <typename T>
void vector2<T>::operator-=(const vector2<T> &tosub){
    this->x -= tosub.x;
    this->y -= tosub.y;
}
template <typename T>
void vector2<T>::operator*=(T tomult){
    this->x *= tomult;
    this->y *= tomult;
}

template <typename T>
void vector2<T>::operator=(const vector2<T> &s){
    this->x = s.x;
    this->y = s.y;
}
