#include <iostream>
#include "metodos.h"

//ALGORITMO DEL METODO BURBUJA
void burbuja(int arr[], int n) 
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j)
         {
            if (arr[j] > arr[j + 1])
             {
                // Intercambiar arr[j] y arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//ALGORITMO DEL METODO POR INSERCCION
void insercion(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        int pos = i;
        int aux = arr[i];

        while((pos>0) && (arr[pos-1]>aux))
        {
            arr[pos] = arr[pos-1];
            pos--;
        }
        arr[pos] = aux;
    }
}

//ALGORITMO QUICK SORT
void quickSort(int arr[], int inicio, int final) 
{
    if (inicio < final) 
    {
        // Obtenemos el índice de partición
        int pi = particion(arr, inicio, final);

        // Ordenamos recursivamente los elementos antes y después de la partición
        quickSort(arr, inicio, pi - 1);
        quickSort(arr, pi + 1, final);
    }
}

//ALGORITMO PARA HACER LA PARTINICION (QUICK SORT)
int particion(int arr[], int inicio, int final)
{
    int pivot = arr[final];  // Elegimos el último elemento como pivote
    int i = inicio - 1;        // Índice del elemento más pequeño

    for (int j = inicio; j < final; j++) 
    {
        // Si el elemento actual es menor o igual al pivote
        if (arr[j] <= pivot)
        {
            i++;
            intercambio(arr[i], arr[j]);
        }
    }
    intercambio(arr[i + 1], arr[final]);  // Colocamos el pivote en su posición correcta
    return (i + 1);
}

//ALGORITMO PARA HACER EL INTERCAMBIO (QUICK SORT)
void intercambio(int& a, int& b) 
{
    int temp = a;
    a = b;
    b = temp;
}
