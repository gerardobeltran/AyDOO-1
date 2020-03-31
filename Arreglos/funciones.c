#include <stdio.h>
#define TRUE  1
#define FALSE 0

// Busqueda Secuencial
int busquedaSecuencial(int datos[], int tam, int buscado){
  int enc=-1, i;
  for (i=0; i<tam && enc==-1 ; i++){
      if (buscado==datos[i])
            enc = i;
  }
  return enc;
}

// Busqueda Secuencial con datos ordenados
int busquedaSecuencialOrdenada(int datos[], int tam, int buscado){

  int enc=-1, i, parar=FALSE;

  for (i=0; i<tam && enc==-1 && parar==0 ; i++){
      if (buscado==datos[i])
        enc = i;
      else if (buscado<datos[i])
        parar=TRUE;
  }
return enc;
}
// Busqueda Binaria
int busquedaBinaria(int datos[], int tam, int buscar){
     int bajo;           //< Posición más baja para buscar
     int alto;           //< Posición más alta para buscar
     int mitad;          //< Mitad del vector
     int encontrado=0;   //< Se pone a uno si se encuentra el elemento

     bajo=0;
     alto=tam-1;
     while((bajo<=alto)&&(!encontrado)){
         mitad=(alto+bajo)/2;
         if(buscar==datos[mitad])
             encontrado=1;
          else if(buscar<datos[mitad])
                 alto=mitad-1;
             else
                 bajo=mitad+1;
     }
     if(encontrado)
         return mitad;
     else
         return -1;
 }

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
 






int main(] {
  printf("Hola mundo!!!");
  return 0;
}
