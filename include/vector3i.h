#ifndef VECTOR3I_H
#define VECTOR3I_H


struct vector3i{
    int x,y,z;
    vector3i(int x,int y,int z);
    //vector2i(vector2i &ccopy);
    vector3i operator+ (const vector3i &toadd) const;
    vector3i operator- (const vector3i &tosub) const;
    vector3i operator* (int tomult) const;
    void operator+= (const vector3i &toadd);
    void operator-= (const vector3i &tosub);
    void operator*= (int tomult);
};

#endif // VECTOR3I_H
