#include "child.h"
#include "string"

using namespace std;

void Child::set_name(string child_name)
{
    Child::name = child_name;
}
string Child::get_name(){
    return  Child::name;
}



void Child::set_lastname(string child_lastname)
{
    Child::lastname = child_lastname;
}
string Child::get_lastname(){
    return  Child::lastname;
}



void Child::set_age(int child_age)
{
    Child::age = child_age;
}
int Child::get_age(){
    return  Child::age;
}

