#include <stdio.h>

int tamanhaDoMaiorSegmentoIgual(int *valores, int quantidade) {
    int maiorSegmento = 1;
    int tamanhoDasSequenciasIguais = 1;
    int count = 1;
    for(count; count < quantidade; count++) {
        if(valores[count - 1] == valores[count]) { 
            tamanhoDasSequenciasIguais++; 
    } else {
        tamanhoDasSequenciasIguais = 1;
    }
    if(tamanhoDasSequenciasIguais > maiorSegmento){
        maiorSegmento = tamanhoDasSequenciasIguais;
    }
    }
    return maiorSegmento;
}

int main() {
    int quantidade;
    int count; 
    scanf("%d", &quantidade);
    int valores[quantidade];
    for(count = 0; count < quantidade; count++) {
        scanf("%d", &valores[count]);
    }
    
    printf("O comprimento do segmento de numeros iguais e: %d\n", tamanhaDoMaiorSegmentoIgual(valores, quantidade));
}