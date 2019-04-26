#ifndef CHILD_H
#define CHILD_H
#include <string>

using namespace std;

class Child
{
private:
    int age;
    string name;
    string lastname;
public:
    //сохранение имяни ребёнка
    void set_name(string);
    //вывод имени ребёнка
    string get_name();

    //установка фамилии ребёнка
    void set_lastname(string);
    //получение фамилии ребёнка
    string get_lastname();

    //установка возраста ребёнка
    void set_age(int);
    //получение возраста ребёнка
    int get_age();
};

#endif // CHILD_H
