#include <stdio.h>

int tamanhaDoSegmentoCrescenteMax(int *valores, int quantidade) {
    int maiorSegmento = 1;
    int tamanhoDasSequenciasCrescentes = 1;
    int count = 1;
    for(count; count < quantidade; count++) {
        if(valores[count - 1] < valores[count]) { 
            tamanhoDasSequenciasCrescentes++; 
    } else {
        tamanhoDasSequenciasCrescentes = 1;
    }
    if(tamanhoDasSequenciasCrescentes > maiorSegmento){
        maiorSegmento = tamanhoDasSequenciasCrescentes;
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
    
    printf("O comprimento do segmento crescente maximo e: %d\n", tamanhaDoSegmentoCrescenteMax(valores, quantidade));
}