#include <stdio.h>

int main()
{int linha,coluna,termoL,termoC,a;

 scanf("%d %d",&linha ,&coluna);
 
  termoL = 1,termoC = 1;
  
 while (termoL <= linha )  
  {for(termoC=1;termoC<termoL;termoC++)
   {if (termoC <= coluna)
    printf("(%d, %d)",termoL,termoC);
    if (termoC < termoL-1 && termoC <coluna)
    printf("-");
   }
   printf("\n");
   termoL++;
   }
return 0;}