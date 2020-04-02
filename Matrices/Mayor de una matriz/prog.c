#include <stdio.h>

int main() {

  int M, N, t, i, may, valor;

  scanf("%d %d", &M, &N );

  t = M * N;

  scanf ("%d", &may );

  for (i=1; i < t; i++)
  {
    scanf("%d", &valor);
    if (valor > may)
      may = valor;
  }

  printf ("%d", may);

  return 0;
}
