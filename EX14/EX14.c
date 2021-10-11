#include <stdio.h>

float N, Decimais, Y, UmaCasa, DuasCasas, TresCasas;  // y : parte decimal do numero dado vira um numero inteiro de 4 digitos.

int U, A1, A2, A3, A4;


int main()
{
  scanf("%f", &N);

  U = N;  
  Decimais = N-U;
  Y = Decimais*10000;
  A1 = Y/1000;
  A2 = (Y-1000*A1)/100;
  A3 = ((Y-1000*A1)-(A2*100))/10;
  A4 = (Y-1000*A1)-(A2*100)-(A3*10);
  
  float fU = U, fA1 = A1, fA2 = A2, fA3 = A3, fA4 = A4;  // tranformando as variaveis inteiras em float. 
  
 if (fA2>4){
  UmaCasa = (fU*10+fA1+1)/10; 
  printf("%.6f\n", UmaCasa);

  } 
 else
  {
  UmaCasa = (fU+fA1/10);
  printf("%.6f\n", UmaCasa);
  }
  
  
   if (fA3>4){
  DuasCasas = (fU*100+fA1*10+fA2+1)/100; 
  printf("%.6f\n", DuasCasas);

  } 
 else
  {
  DuasCasas = (fU+fA1/10+fA2/100);
  printf("%.6f\n", DuasCasas);
  }
  
  
    if (fA4>4){
  TresCasas = (fU*1000+fA1*100+fA2*10+fA3+1)/1000; 
  printf("%.6f\n", TresCasas);

  } 
 else
  {
  TresCasas = (fU+fA1/10+fA2/100+fA3/1000);
  printf("%.6f\n", TresCasas);
  }
}