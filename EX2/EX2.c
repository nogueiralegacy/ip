#include <stdio.h>

int main()
{
    float valorSalarioMinimo;
    float quantidadeConsumidaDeEnergia;

    scanf("%f", &valorSalarioMinimo);
    scanf("%f", &quantidadeConsumidaDeEnergia);

    float valorUnidadeKw = valorSalarioMinimo * 0.7 / 100;
    float valorTotal = valorUnidadeKw * quantidadeConsumidaDeEnergia;

    printf("Custo por kW: R$ %.2f\n", valorUnidadeKw);
    printf("Custo do consumo: R$ %.2f\n", valorTotal);
    printf("Custo com desconto: R$ %.2f\n", valorTotal * 0.9);
}