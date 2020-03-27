#include <stdio.h>

void ordenarAscendente(int datos[], int tam ){

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

void ordenarDescendente(int datos[], int tam ){

    int i, j, aux;

    for (i=0; i<tam-1; i++)
      for (j=0; j<tam-1-i; j++){
          if (datos[j]<datos[j+1]){
            aux = datos[j];
            datos[j] = datos[j+1];
            datos[j+1] = aux;
          }
      }

}

int main() {
  int N, i;

  scanf("%d", &N); // lectura del tamaño de arreglo

  int datos[N]; // crear el arreglo

  for (i=0; i<N; i++) // lectora de los datos del arreglo
    scanf("%d", &datos[i]);

   ordenarAscendente(datos, N);   // llamada a la funcion de ordenacion

   for (i=0; i<N; i++) // salida de los datos ordenados
      printf("%d\n", datos[i]);

  return 0;
}
