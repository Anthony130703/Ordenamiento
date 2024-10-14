#include <iostream>
#include "metodos.h"

int main() {
    int n;
    std::cout << "Cuantos elementos deseas ingresar? ";
    std::cin >> n;

    int numeros[n];  

    std::cout << "Ingresa " << n << " numeros:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> numeros[i];
    }
    std::cout<<"El arreglo es: ";
     for (int i = 0; i < n; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    // Ordenar el arreglo usando el método burbuja
    burbuja(numeros, n);

    std::cout << "Los numeros ordenados son: ";
    for (int i = 0; i < n; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}