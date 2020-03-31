#include <stdio.h>

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

int main()
{
    int x [5]= {1, 2, 3, 4, 5};
    int i, pos;
    pos = busquedaBinaria(x, 5, 4);

    printf("%d \n" , pos);
    
    return 0;
}

