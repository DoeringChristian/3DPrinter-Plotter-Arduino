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
bool vector2<T>::operator==(vector2<T> &tocomp) const{
    return (this->x == tocomp.x && this->y == tocomp.y);
}

//types to be used:
template class vector2<int>;
template class vector2<float>;
template class vector2<unsigned int>;
