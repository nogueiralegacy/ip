#include <stdio.h>

int main()
{
    int centenas;
    int dezenas;
    int unidades;

    scanf("%d", &centenas);
    scanf("%d", &dezenas);
    scanf("%d", &unidades);

    int numero = centenas * 100 + dezenas * 10 + unidades;
    int quadrado = numero * numero;

    printf("%d, %d", numero, quadrado);
}