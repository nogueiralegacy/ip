#include <stdio.h>
#include <stdbool.h>

bool ordenada(float *sequencia, int quantidadeDeValores) {
    int posicao;
    for(posicao = 1; posicao < quantidadeDeValores; posicao++) {
        if(sequencia[posicao - 1] > sequencia[posicao]) {
            
            return false;
        }
    }
    
    return true;
}


void main() {
    int quantidadeDeValores = 1;
    int posicao;
    while (quantidadeDeValores != 0) {
        scanf("%d", &quantidadeDeValores);
        if (quantidadeDeValores != 0) {
            float sequencia[quantidadeDeValores];
            for (posicao = 0; posicao < quantidadeDeValores; posicao++) {
               scanf("%f", &sequencia[posicao]);
            }
        
            if (ordenada(sequencia, quantidadeDeValores)) {
                printf("ORDENADA\n");
            }   else {
                    printf("DESORDENADA\n");
                    }
        }            
    }
}