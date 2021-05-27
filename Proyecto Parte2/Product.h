#ifndef PRODUCT_H
#define PRODUCT_H
using namespace std;

class Product{
public:
    string descripcion;
    int codigo, precio, stock;
    Product(int code, string description, int cantidad, int price){
        codigo= code;
        descripcion= description;
        stock= cantidad;
        precio= price;
    };
    void imprimir();
};

#endif
