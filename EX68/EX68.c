#include <stdio.h>
#include <stdbool.h>

double comissaoTotal(float precoTV1, float precoTV2, int quantidadeVendidaTV1, int quantidadeVendidaTV2) {
    float comissaoTv1;
    float porcentagemDeComissaoTv1;
    porcentagemDeComissaoTv1 = (quantidadeVendidaTV1 < 10) ?  0.13 : 0.14;
    comissaoTv1 = precoTV1 * quantidadeVendidaTV1 * porcentagemDeComissaoTv1;
    
    float comissaoTv2;
    float porcentagemDeComissaoTv2;
    porcentagemDeComissaoTv2 = (quantidadeVendidaTV2 < 20) ?  0.12 : 0.13;
    comissaoTv2 = precoTV2 * quantidadeVendidaTV2 * porcentagemDeComissaoTv2;    
    
    return comissaoTv1 + comissaoTv2;
}

double salarioBruto(float salarioMinimo, double comissao) {
    return salarioMinimo + comissao;
}

double salarioLiquido(double salarioBruto, float limiteImposto) {
    double total;
    if (salarioBruto * 0.92 > limiteImposto) {
        total = ((salarioBruto * 0.92) - limiteImposto) * 0.85 + limiteImposto;
        
        return total;
    } else {
        total = salarioBruto * 0.92;
        
        return total;
    }
}    

void main() {
    float salarioMinimo;
    float limiteImposto;
    float precoTV1;
    float precoTV2;
    scanf("%f %f %f %f", &salarioMinimo, &limiteImposto, &precoTV1, &precoTV2);
    
    int matricula = 1;
    int quantidadeVendidaTV1;
    int quantidadeVendidaTV2;
    
    while (matricula != 0) {
        scanf("%d %d %d", &matricula, &quantidadeVendidaTV1, &quantidadeVendidaTV2);
        
        if (matricula != 0) {
            double comissao = comissaoTotal(precoTV1, precoTV2, quantidadeVendidaTV1, quantidadeVendidaTV2);
            double bruto = salarioBruto(salarioMinimo, comissao);
            double liquido = salarioLiquido(bruto, limiteImposto);
            printf("MATRICULA = %d, SALARIO BRUTO = %.2lf, SALARIO LIQUIDO = %.2lf\n", matricula, bruto, liquido);
        }
    }
}