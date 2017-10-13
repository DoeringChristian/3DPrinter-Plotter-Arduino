#ifndef VECTOR2I_H
#define VECTOR2I_H


struct vector2i{
    int x,y;
    vector2i();
    vector2i(int x,int y);
    //vector2i(vector2i &ccopy);
    vector2i operator+ (const vector2i &toadd) const;
    vector2i operator- (const vector2i &tosub) const;
    vector2i operator* (int tomult) const;
    void operator+= (const vector2i &toadd);
    void operator-= (const vector2i &tosub);
    void operator*= (int tomult);
    void operator= (const vector2i &s);
};

#endif // VECTOR2I_H
