#include "FuncionAux.h"
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
const int dimension= 50; // Dimensión de una cadena.

//void menuPrincipal(){
//}

void cargarProd(vector <Product> &lista){

}

int contProducto(){
    fstream registro("products.txt", ios::in);
    string codigo, descripcion, precio, stock;
    int contador=-1;
    while(!registro.eof()){
        getline(registro, codigo);
        getline(registro, descripcion);
        getline(registro, precio);
        getline(registro, stock);
        contador++;
    }
    registro.close();
    return contador;
}

void registrarProducto(){
    fstream registro("products.txt", ios::app); //out: escritura, in: lectura, app: agregar
    string descripcion, stock, precio, codigo;
    cout << "Ingrese el c\242digo del producto: \n";
    getline(cin, codigo);
    cout << "Ingrese la descripci\242n del producto: \n";
    getline(cin, descripcion);
    cout << "Ingrese el precio de cada producto: \n";
    getline(cin, precio);
    cout << "Ingrese el stock del producto: \n";
    getline(cin, stock);
    registro << codigo << endl << descripcion << endl << precio << endl << stock << endl;
    registro.close();
    return;
}
