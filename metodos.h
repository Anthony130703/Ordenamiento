#ifndef METODOS_H
#define METODOS_H

void burbuja(int arr[], int n);
void insercion(int arr[], int n);

//METODO QUICKSORT
void quickSort(int arr[], int inicio, int final);
int particion(int arr[], int inicio, int final);
void intercambio(int& a, int& b);
#endif