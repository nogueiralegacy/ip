#include <stdio.h>
#include <math.h>

float AX, AY, BX, BY, Distancia, Cx, Cy;

int main()
{
  scanf("%f", &AX);
  scanf("%f", &AY);
  scanf("%f", &BX);
  scanf("%f", &BY);
  
  Cx = AX-BX;
  Cy = AY-BY;
  
  Distancia = sqrt(pow(Cx, 2) + pow(Cy, 2));
  
  printf("A DISTANCIA ENTRE A e B = %.2f\n", Distancia);
}
