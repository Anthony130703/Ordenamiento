#include <iostream>
#include <stdlib.h> //FUNCIONA NEW Y DELETE
#include "metodos.h"
using namespace std;

int main() {
    int n;
    cout << "Cuantos elementos deseas ingresar? ";
    cin >> n;

    int* numeros= new int[n];  

    cout << "Ingresa " << n << " numeros:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }
    cout<<"El arreglo es: ";
     for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Ordenar el arreglo usando el metodo burbuja
    burbuja(numeros, n);
    // Ordenar el arreglo usando el metodo de insercion
    insercion(numeros,n);
    // ordenar el arreglo usando el metodo Quick Sort
    quickSort(numeros, 0, n-1);

    cout << "Los numeros ordenados son: ";
    for (int i = 0; i < n; ++i) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}