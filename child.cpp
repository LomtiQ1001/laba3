#include "child.h"
#include "string"

using namespace std;

void Child::set_name(string child_name)
{
    name = child_name;
}
string Child::get_name(){
    return  name;
}



void Child::set_lastname(string child_lastname)
{
    lastname = child_lastname;
}
string Child::get_lastname(){
    return  lastname;
}



void Child::set_age(int child_age)
{
    age = child_age;
}
int Child::get_age(){
    return  age;
}

