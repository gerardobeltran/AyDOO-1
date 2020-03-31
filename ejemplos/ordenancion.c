#include <stdio.h>

// Ordenacion Rapida - Quick Sort
void ordenacionRapida(int *datos, int tam) {
  if (tam < 2) return;
 
  int pivot = datos[tam / 2];
 
  int i, j;
  for (i = 0, j = tam - 1; ; i++, j--) {
    while (datos[i] < pivot) i++;
    while (datos[j] > pivot) j--;
 
    if (i >= j) break;
 
    int temp = datos[i];
    datos[i]     = datos[j];
    datos[j]     = temp;
  }
 
  ordenacionRapida(datos, i);
  ordenacionRapida(datos + i, tam - i);
}

int main()
{
    int x [5]= {6, 2, 8, 1, 4};
    int i;
    ordenacionRapida(x, 5);

    for (i=0; i<5; i++)
        printf("%d \n" , x[i]);
    
    return 0;
}

