#include <stdio.h>
int main() {
  int j, i, N, M, enc;
  scanf ("%d", &N);
  int mat[N][N];
  for (i=0; i<N; i++)
  {
    for (j=0; j<N; j++)
    {
        scanf("%d" mat[i][j]);
    }
  }
valor = mat[0][0];
enc = 1
for (i=1; i<N enc == 1; i++)
{
      if (valor!= mat[i][i])
        enc = 0;
  }
}

if (enc ==1 )
  printf ("SI");
else
  printf ("NO");



  return 0;
}
