#include "tiles.h"
#include <iostream>

using namespace std;


void Tiles::set_brand(string tiles_brand){
    brand = tiles_brand;
}

void Tiles::set_size_h(int tiles_size_h){
     size_h = tiles_size_h;
 }

 void Tiles::set_size_w(int tiles_size_w){
     size_w = tiles_size_w;
 }

 void Tiles::set_price(int tiles_price){
     price = tiles_price;
 }

 void Tiles::getData(){
     setlocale(LC_ALL,"rus");
     cout << "Марка: " << brand << endl <<"Высота: " << size_h << endl << "Ширина: " << size_w << endl << "Цена: " << price << endl;
 }
