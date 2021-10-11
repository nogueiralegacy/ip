#include <stdio.h>

int main()
{
    float valorIngresso;
    int valorInicial;
    int valorFinal;
    float lucro;
    float maiorLucro = 0.0;
    int countMaiorLucro = 0.0;
    int valoresMaiorLucro = 0.0;
    scanf("%f\n%d\n%d", &valorIngresso, &valorInicial, &valorFinal);
    int quantidadeDeCasos = valorFinal - valorInicial + 1;
    int valores[quantidadeDeCasos];    
    int count = valorInicial;
    float reducoes = valorIngresso - valorInicial;
   for(count; count <= valorFinal; count++) {
       if(count <= valorIngresso){
           valores[count] = 120 + (50 * reducoes);
           lucro = count * valores[count] - (200 + valores[count] * 0.05);
           printf("V: %d.00, N: %d, L: %.2f\n", count, valores[count], lucro);
           reducoes--;
       }
       if(count > valorIngresso) {
           valores[count] = 120 - (60 * (count - valorIngresso));
           lucro = count * valores[count] - (200 + valores[count] * 0.05);
           printf("V: %d.00, N: %d, L: %.2f\n", count, valores[count], lucro);
       }
       if(lucro > maiorLucro) {
           maiorLucro = lucro;
           countMaiorLucro = count;
           valoresMaiorLucro = valores[count];
       }
    }
    printf("Melhor valor final: %d.00\nLucro: %.2f\nNumero de ingressos: %d\n", countMaiorLucro, maiorLucro, valoresMaiorLucro);
}
