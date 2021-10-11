#include <stdio.h>



int main()
{
  float Salario, SalarioReajustado;
    
    scanf("%f", &Salario);
    
    if(Salario<=300){
    SalarioReajustado = Salario*1.5;
    printf("SALARIO COM REAJUSTE = %.2f\n", SalarioReajustado);
    } else {
    SalarioReajustado = Salario*1.3;
    printf("SALARIO COM REAJUSTE = %.2f\n", SalarioReajustado);
    }
    return 0;
}
