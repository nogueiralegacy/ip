#include <stdio.h>

int main(){
    int publico, numeroDeCasosTeste;
    double popular, geral, arquibancada, cadeira, faturamento;
    int count = 1;
    scanf("%d", &numeroDeCasosTeste);
    for(numeroDeCasosTeste; numeroDeCasosTeste > 0; numeroDeCasosTeste--){
        scanf("%d %lf %lf %lf %lf", &publico, &popular, &geral, &arquibancada, &cadeira);
        faturamento = publico * (popular + geral * 5 + arquibancada * 10 + cadeira * 20) / 100;
        printf("A RENDA DO JOGO N. %d E = %.2lf\n", count, faturamento);
        count++;
    }
}