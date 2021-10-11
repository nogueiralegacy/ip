#include <stdio.h>

double* rendimento(double *rendimentos, double valorInicial, double juros, int quantidadeMeses) {
    int count;
    rendimentos[0] = valorInicial * (1.0 + juros);
    
    for(count = 1; count < quantidadeMeses; count++) {
        rendimentos[count] = rendimentos[(count - 1)] * (1.0 + juros);
    }
    return rendimentos;
}

int main() {
    double valorInicial;
    double juros;
    int quantidadeMeses;
    int contador;
    scanf("%lf %lf %d", &valorInicial, &juros, &quantidadeMeses);
    double rendimentos[quantidadeMeses];
    double* valores = rendimento(rendimentos, valorInicial, juros, quantidadeMeses);
    for(contador = 0; contador < quantidadeMeses; contador++) {
        printf("a*(1+r)^%d = %.2lf, renda: %.2lf\n", contador + 1, valores[contador], (valores[contador] - valorInicial));
    }
}