#include <stdio.h>

void ordenar(int datos[], int tam ){

    int i, j, aux;

    for (i=0; i<tam-1; i++)
      for (j=0; j<tam-1-i; j++){
          if (datos[j]>datos[j+1]){
            aux = datos[j];
            datos[j] = datos[j+1];
            datos[j+1] = aux;
          }
      }

}
int main() {
  int i;
  int  x[5]={16, 5, 3, 1, 8};
  int  y[6]={ 3, 7, 1, 3, 4, 8};

  ordenar(x, 5);
  for (i=0; i<5; i++ )
    printf("%d ", x[i]);
  printf("\n");

  ordenar(y, 6);
  for (i=0; i<6; i++ )
    printf("%d ", y[i]);
  printf("\n");
  return 0;
}
