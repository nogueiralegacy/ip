#include <stdio.h>

int main()
{
  int Ano;
  
  scanf("%d", &Ano);
 
 if (Ano%4 == 0 && Ano > 1582 && Ano%100 != 0){
      printf("ANO BISSEXTO\n");
             }else if (Ano%400 != 0){
                    printf("ANO NAO BISSEXTO\n");
                                    }
  if (Ano%400 == 0){
     printf("ANO BISSEXTO\n");
  }                            
    return 0;
}
