#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include "FuncionAux.h"

using namespace std;

int main(){
    vector <Product> listaProductos;
    registrarProducto();
    cout << "El n\243mero de productos es: " << contProducto() << endl;
}
