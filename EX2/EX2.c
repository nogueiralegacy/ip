
#include <stdio.h>
float SalarioMinimo, GastodeEnergia, CustoPorKw, CustoEnergia, CustoComDesconto;
int main()
{
 scanf("%f", &SalarioMinimo);
 scanf("%f", &GastodeEnergia);
 CustoPorKw = 0.007*SalarioMinimo;
 CustoEnergia = CustoPorKw*GastodeEnergia;
 CustoComDesconto = CustoEnergia*0.9;
 printf("Custo por kW: R$ %.2f\n", CustoPorKw);
 printf("Custo do consumo: R$ %.2f\n", CustoEnergia);
 printf("Custo com desconto: R$ %.2f\n", CustoComDesconto);

    return 0;
}
