#include <stdio.h>
#include <stdbool.h>

int main () {
    int qntGraos;
    scanf("%d", &qntGraos);
    int total = (31 * qntGraos * 2) + (qntGraos * 33);
    printf("%d\n", total);
}