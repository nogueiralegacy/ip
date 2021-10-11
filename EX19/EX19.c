#include <stdio.h>

float N1, N2, N3, Nmedia;

int main()
{
  scanf("%f %f %f", &N1, &N2, &N3);

  Nmedia = (N1+N2+N3)/3;
  
  printf("MEDIA = %.2f\n", Nmedia);
  
  if (6 <= Nmedia){
      
  printf("APROVADO\n");
   
  } else {
      
  printf("REPROVADO\n");
      
  }
}
