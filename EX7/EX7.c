#include <stdio.h>

float OneOne, OneTwo, TwoOne, TwoTwo, Det;
int main()
{
  scanf("%f", &OneOne);
  scanf("%f", &OneTwo);
  scanf("%f", &TwoOne);
  scanf("%f", &TwoTwo);
  
  Det = OneOne*TwoTwo - OneTwo*TwoOne;
  printf("O VALOR DO DETERMINANTE E = %.2f\n", Det);
}
