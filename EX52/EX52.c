#include <stdio.h>

int main() {
    int N = 1;
    float quantidadeDePares = 0;
    float quantidadeDeimpares = 0;
    float somaPares = 0;
    float somaImpares = 0;
    float mediaPares = 0.0;
    float mediaImpares = 0.0;
    while(N > 0) {
    scanf("%d", &N);
    if(N > 0) {
    if(N % 2 == 0){
        quantidadeDePares++;
        somaPares = somaPares + N;
    } else {
        quantidadeDeimpares++;
        somaImpares = somaImpares + N;
    }
    }
    }
    mediaPares = somaPares / quantidadeDePares;
    mediaImpares = somaImpares / quantidadeDeimpares;
    printf("MEDIA PAR: %f\n", mediaPares);
    printf("MEDIA IMPAR: %f\n", mediaImpares);
}