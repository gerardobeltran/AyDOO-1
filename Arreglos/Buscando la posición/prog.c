#include <stdio.h>
// conentario 
int busquedaSecuencial(int datos[], int tam, int buscado){
int enc=-1, i;
for (i=0; i<tam && enc==-1 ; i++){
    if (buscado==datos[i]){
          enc = i;
    }
  }
  return enc;
}
int busquedaSecuencialOrdenada(int datos[], int tam, int buscado){
int enc=-1, i, parar=0;
for (i=0; i<tam && enc==-1 && parar==0 ; i++){
    if (buscado==datos[i]){
          enc = i;
    }
    else if (buscado<datos[i]){
      parar=1;
    }
}

return enc;
}

int main() {

int x [5]= {1,2,7,9,16};
int pos;
pos = busquedaSecuencialOrdenada(x, 5, 8);

printf ("%d\n", pos);

  return 0;
}
