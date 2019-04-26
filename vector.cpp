#include "vector.h"
#include <iostream>
#include <cmath>

using namespace std;

void Vector::set_x(int vector_x){
    x = vector_x;
}
int Vector::get_x(){
    return x;
}


void Vector::set_y(int vector_y){
    y = vector_y;
}
int Vector::get_y(){
    return y;
}


void Vector::set_z(int vector_z){
   z = vector_z;
}
int Vector::get_z(){
    return z;
}


int Vector::modul(){
    mod = sqrt((x*x) + (y*y) + (z*z));
    return mod;
}


