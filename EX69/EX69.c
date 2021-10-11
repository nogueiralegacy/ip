#include <stdio.h>
#include <stdbool.h>

bool fibonacci(int *sequencia, int qntDeElementos, int posicao) {
    if(sequencia[posicao] == sequencia[posicao - 1] + sequencia[posicao - 2]) {
        return true;
    }
    return false;
}


int cursor(int *sequencia, int qntDeElementos) {
    int count;
    for(count = 2; count < qntDeElementos; count ++) {
        if(fibonacci(sequencia, qntDeElementos, count)) {
            printf("OK\n");
        } else {
            return printf("Nao e Fibonacci\n");
        }
    }
    printf("A serie informada e de Fibonacci\n");
}


int main() {
    int qntDeElementos;
    scanf("%d ", &qntDeElementos);
    int valoresIniciais[2];
    scanf("%d %d", &valoresIniciais[0], &valoresIniciais[1]);
    int count;
    int sequencia[qntDeElementos];
    for(count = 0; count < qntDeElementos; count++) {
        scanf("%d", &sequencia[count]);
    }
    if(sequencia[0] == valoresIniciais[0]) {
        printf("OK\n");
    } else {
            return printf("Nao e Fibonacci\n");
        }
    if(sequencia[1] == valoresIniciais[1]) {
        printf("OK\n");
    } else {
            return printf("Nao e Fibonacci\n");
        }
    cursor(sequencia, qntDeElementos);    
}