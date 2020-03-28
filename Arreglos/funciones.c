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




int main(] {
  printf("Hola mundo!!!");
  return 0;
}
