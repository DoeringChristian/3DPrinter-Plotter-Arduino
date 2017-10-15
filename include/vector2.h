#ifndef VECTOR2_H
#define VECTOR2_H

template <typename T>

struct vector2{
    T x,y;
    vector2();
    vector2(T x,T y);
    //vector2i(vector2i &ccopy);
    vector2<T> operator+ (const vector2<T> &toadd) const;
    vector2 operator- (const vector2<T> &tosub) const;
    vector2 operator* (T tomult) const;
    void operator+= (const vector2<T> &toadd);
    void operator-= (const vector2<T> &tosub);
    void operator*= (T tomult);
    bool operator == (vector2<T> &tocomp) const;
    
    
};
//common types:
typedef vector2<int> vector2i;
typedef vector2<float> vector2f;
typedef vector2<unsigned int> vector2u;

#endif // VECTOR2I_H
