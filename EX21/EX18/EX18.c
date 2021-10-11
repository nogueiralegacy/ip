#include <stdio.h>

float a, b, c, d, e, f, x, y;

int main()
{
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  scanf("%f", &d);
  scanf("%f", &e);
  scanf("%f", &f);

  y = (f*a-c*d)/(e*a-b*d);
  x = (c-b*y)/a;
  
  printf("O VALOR DE X E = %.2f\nO VALOR DE Y E = %.2f\n", x, y);

}
