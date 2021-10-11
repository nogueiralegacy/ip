#include <stdio.h>

int converterValor(int valor) {
    int unidade = valor / 100;
    int dezena = valor / 10 - unidade * 10;
    int centena = valor - unidade * 100 - dezena * 10;
    int valorReal = (unidade) + (dezena * 10) + (centena * 100);
    return valorReal;
}

int maiorValor(int valorReal1, int valorReal2) {
    return (valorReal1 > valorReal2) ? valorReal1 : valorReal2;
}

int main() {
    int valor1, valor2;
    int casosTeste;
    scanf("%d", &casosTeste);
    while(casosTeste > 0) {
        scanf("%d %d", &valor1, &valor2);
        printf("%d\n", maiorValor(converterValor(valor1), converterValor(valor2)));
        casosTeste--;
    }
    return 0;
}