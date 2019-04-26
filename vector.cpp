#include "vector.h"
#include <iostream>
#include <cmath>

using namespace std;

void Vector::set_x(int vector_x){
    Vector::x = vector_x;
}
int Vector::get_x(){
    return Vector::x;
}


void Vector::set_y(int vector_y){
    Vector::y = vector_y;
}
int Vector::get_y(){
    return Vector::y;
}


void Vector::set_z(int vector_z){
   Vector::z = vector_z;
}
int Vector::get_z(){
    return Vector::z;
}


int Vector::modul(){
    Vector::mod = sqrt((x*x) + (y*y) + (z*z));
    return Vector::mod;
}


