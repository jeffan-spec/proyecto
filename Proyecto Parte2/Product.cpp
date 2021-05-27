#include <iostream>
#include <cstring>
#include "Product.h"

void Product::imprimir(){
    cout << codigo << "|\t" << descripcion << "|\t" << precio << "|\t" << stock << endl;
    return;
}

