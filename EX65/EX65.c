#include <stdio.h> 
#include <stdbool.h>
#include <math.h>


int mediaAritmeticaDosImparesConsecutivos(int valor) {
    return pow (valor, 2);
}

int *findImparesConsecutivos(int valor) {
    if(valor == 0) {
        
    } else {
        findImparesConsecutivos(valor - 1);
        
        int media = mediaAritmeticaDosImparesConsecutivos(valor);
        int inicio = media - (valor - 1);
        int indice = 0;
        printf("%d*%d*%d = ", valor, valor, valor);
        for (indice; indice < valor; indice ++) {
            printf("%d", inicio);
            if(indice != valor - 1) {
                printf("+");
            }
            inicio = inicio + 2;
        }
        printf("\n");
    }
}

void main() {
    int valor;
    scanf("%d", &valor);
    findImparesConsecutivos(valor);
}