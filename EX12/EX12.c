#include <stdio.h>

float CustoFabrica, CustoDistribuidor, CustoImpostos, ValorFinal; 

int main()
{
  scanf("%f", &CustoFabrica);
  scanf("%f", &CustoDistribuidor);
  scanf("%f", &CustoImpostos);
  
  ValorFinal = CustoFabrica*(1+CustoDistribuidor/100+CustoImpostos/100);
  
  printf("O VALOR DO CARRO E = %.2f\n", ValorFinal);
}

