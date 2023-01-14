#include <stdio.h>

int main()
{
    float temperatura;
    float quantidadeDeChuva;

    scanf("%f", &temperatura);
    scanf("%f", &quantidadeDeChuva);

    printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f\n", (temperatura - 32) / 1.8, quantidadeDeChuva * 25.4);
}
