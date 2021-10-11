#include <stdio.h>
#include <math.h>

float L1, L2, L3, T, AreaT; 

int main()
{
  scanf("%f", &L1);
  scanf("%f", &L2);
  scanf("%f", &L3);
  
  T = (L1+L2+L3)/2;
  AreaT = sqrt(T*(T-L1)*(T-L2)*(T-L3));
  
  printf("A AREA DO TRIANGULO E = %.2f\n", AreaT);
}

