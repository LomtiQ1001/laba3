#include <iostream>
#include "child.h"
#include "tiles.h"
#include "complex.h"
#include "vector.h"

using namespace std;

    void task1(){
    //создаём обьекты класса
    Child onechild, twochild;

    string name;
    string lastname;
    int age;

    setlocale(LC_ALL,"rus");

    //ввод имяни, фамилии, и возраста с клавиатуры
    cout << "Введите имя" << endl;
    cin >> name;
    cout << "Введите фамилию" << endl;
    cin >>lastname;
    cout << "Введите возраст" << endl;
    cin >> age;

    //сохранение введённых данных в обьекты классов
    onechild.set_name(name);
    onechild.set_lastname(lastname);
    onechild.set_age(age);



    //ввод имяни, фамилии, и возраста с клавиатуры
    cout << "Введите имя" << endl;
    cin >> name;
    cout << "Введите фамилию" << endl;
    cin >> lastname;
    cout << "Введите возраст" << endl;
    cin >> age;

    //сохранение введённых данных в обьекты классов
    twochild.set_name(name);
    twochild.set_lastname(lastname);
    twochild.set_age(age);


    //Выводим данные объектов класса
    cout << "Ребёнок: " << onechild.get_name() << " " << onechild.get_lastname() << " " << onechild.get_age() << " лет." << endl;
    cout << "Ребёнок: " << twochild.get_name() << " " << twochild.get_lastname() << " " << twochild.get_age() << " лет." << endl;
    }

    void task2(){

        Tiles towar, towar2;

        string brand;//название бренда
        int price;//цена
        int size_h;//размер в высоту
        int size_w;//размер в ширину


        setlocale(LC_ALL,"rus");

        //ввод бренда, высота, ширина, и цены с клавиатуры
        cout << "Введите название бренда" << endl;
        cin >> brand;
        cout << "Введите высоту" << endl;
        cin >> size_h;
        cout << "Введите ширину" << endl;
        cin >> size_w;
        cout << "Введите цену" << endl;
        cin >> price;

        //сохранение введённых данных в обьекты классов
        towar.set_brand(brand);
        towar.set_size_h(size_h);
        towar.set_size_w(size_w);
        towar.set_price(price);

        towar.getData();

        //ввод бренда, высота, ширина, и цены с клавиатуры
        cout << "Введите название бренда" << endl;
        cin >> brand;
        cout << "Введите высоту" << endl;
        cin >> size_h;
        cout << "Введите ширину" << endl;
        cin >> size_w;
        cout << "Введите цену" << endl;
        cin >> price;

        //сохранение введённых данных в обьекты классов
        towar2.set_brand(brand);
        towar2.set_size_h(size_h);
        towar2.set_size_w(size_w);
        towar2.set_price(price);

        towar2.getData();
       }

    void task3(){

        Complex z1;

        double real, imag;

        setlocale(LC_ALL,"rus");

        cout << "Введите реальную часть" << endl;
        cin >> real;
        cout << "Введите мнимую часть" << endl;
        cin >> imag;

        //сохранение введённых данных в обьекты классов
        z1.set_real(real);
        z1.set_imag(imag);

        cout << "Модуль: " << z1.get_modul() << endl;
        cout << "Аргумент: " << z1.get_argum() << endl;
    }

    void task4(){
        Vector v, v1, v2;

        int x, y, z;

        setlocale(LC_ALL,"rus");/*
        switch (war) {
        case 1:
            cout << "Введите координату Х первого вектора " << endl;
            cin >> x;
            cout << "Введите координату Y первого вектора " << endl;
            cin >> y;
            cout << "Введите координату Z первого вектора " << endl;
            cin >> z;

            v.set_x(x);
            v.set_y(y);
            v.set_z(z);

            cout << "Модуль первого вектора: " << v.modul() << endl;
            break;
        case 2:
            cout << "Введите координату Х первого вектора " << endl;
            cin >> v.x;
            cout << "Введите координату Y первого вектора " << endl;
            cin >> v.y;
            cout << "Введите координату Z первого вектора " << endl;
            cin >> v.z;

            cout << "Введите координату Х второго вектора " << endl;
            cin >> v1.x;
            cout << "Введите координату Y второго вектора " << endl;
            cin >> v1.y;
            cout << "Введите координату Z второго вектора " << endl;
            cin >> v1.z;
            cout << "Сумма векторов: (" << v2.sumx() << ";" << v2.sumy() << ";" << v2.sumz() << ")" << endl;
            break;
        case 3:
            cout << "Введите координату Х первого вектора " << endl;
            cin >> v.x;
            cout << "Введите координату Y первого вектора " << endl;
            cin >> v.y;
            cout << "Введите координату Z первого вектора " << endl;
            cin >> v.z;

            cout << "Введите координату Х второго вектора " << endl;
            cin >> v1.x;
            cout << "Введите координату Y второго вектора " << endl;
            cin >> v1.y;
            cout << "Введите координату Z второго вектора " << endl;
            cin >> v1.z;
             cout << "Сумма векторов: (" << v2.minx(v.x, v1.x) << ";" << v2.miny() << ";" << v2.minz() << ")" << endl;
            break;
        default:
            break;
        }
*/
        cout << "Введите координату Х первого вектора " << endl;
        cin >> x;
        cout << "Введите координату Y первого вектора " << endl;
        cin >> y;
        cout << "Введите координату Z первого вектора " << endl;
        cin >> z;

        v.set_x(x);
        v.set_y(y);
        v.set_z(z);

        cout << "Введите координату Х второго вектора " << endl;
        cin >> x;
        cout << "Введите координату Y второго вектора " << endl;
        cin >> y;
        cout << "Введите координату Z второго вектора " << endl;
        cin >> z;

        v1.set_x(x);
        v1.set_y(y);
        v1.set_z(z);

        cout << "Модуль первого вектора: " << v.modul() << endl;

        cout << "Модуль второго вектора: " << v1.modul() << endl;

        cout << "Сумма векторов: (" << v.get_x() + v1.get_x() << ";" << v.get_y() + v1.get_y() << ";" << v.get_z() + v1.get_z() << ")" << endl;

        cout << "Разница векторов: (" << v.get_x() + v1.get_x() << ";" << v.get_y() + v1.get_y() << ";" << v.get_z() + v1.get_z() << ")" << endl;

    }

    int main() {
        int task;

        setlocale(LC_ALL,"rus");

        cout << "Выберите номер задания" << endl;
        cin >> task;
        cout << endl;

        switch (task) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        default:
            break;
        }
    return 0;
}
