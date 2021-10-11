#include <stdio.h>

float ConsumoM3, CComercial, CIndustrial, CResidencial;
int Conta;
char TipoConsumidor;
int main()
{
  scanf("%d %f %c", &Conta, &ConsumoM3, &TipoConsumidor);
  
  printf("CONTA = %d\n", Conta);
  
  if(TipoConsumidor ==  'C'){
      
  CComercial = 500+(ConsumoM3-80)*0.25;
  
  printf("VALOR DA CONTA = %.2f\n", CComercial);
  
  } else if (TipoConsumidor == 'I'){
      
  CIndustrial = 800+(ConsumoM3-100)*0.04;
  
  printf("VALOR DA CONTA = %.2f\n", CIndustrial);
      
  } else {
      
  CResidencial = 5+ConsumoM3*0.05;
  
  printf("VALOR DA CONTA = %.2f\n", CResidencial);
  }
}
