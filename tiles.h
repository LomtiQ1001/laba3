#ifndef TILES_H
#define TILES_H
#include <string>

using namespace std;

class Tiles
{
private:

public:
    string brand;//название бренда
    int price;//цена
    int size_h;//размер в высоту
    int size_w;//размер в ширину

    void getData();//метод

    void set_brand(string);
    void set_size_h(int);
    void set_size_w(int);
    void set_price(int);
};

#endif // TILES_H
