#include <stdio.h>

int main()
{
  
  int m[3][4]={ {5, 4, 3, 6}, {2, 1, 0, 7} , {6, 7, 8, 2}} ;
  int i,j;
  
  for(i=0; i<3;i++)
  {
    for (j=0; j<4; j++)
    {   
        printf("(%d,%d) %d ", i, j, m[i][j]);
    } 
    printf("\n");
  }
  
  

    return 0;
}

