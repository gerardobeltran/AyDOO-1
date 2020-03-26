#include <stdio.h>

int busquedaSecuencial(int datos[], int tam, int buscado){
int enc=-1;
for (i=0; i<tam && enc==-1 ; i++){
    if (buscado==datos[i]){
          enc = i;
    }
}
return enc;
}




int main() {



  return 0;
}
