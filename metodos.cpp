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