#include <stdio.h>

int H;
float Valor;

int main() {
  scanf("%d", &H);
    
  Valor = 10*(H/3)+(H%3)*5;
  
  printf("O VALOR A PAGAR E = %.2f\n", Valor);  

}
