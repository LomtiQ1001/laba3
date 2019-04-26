#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
public:
    int x=0;
    int y=0;
    int z=0;
    float mod;

    int modul();

    int get_x();
    int get_y();
    int get_z();

    void set_x(int);
    void set_y(int);
    void set_z(int);

};

#endif // VECTOR_H
