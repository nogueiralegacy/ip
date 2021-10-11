#include <stdio.h> 
#include <stdbool.h>
#include <math.h>

int *achaDivisores(int valor, int *divisoresDeValor) {
    int indice = 1;
    int posicao = 0;
    for (indice; indice <= valor / 2; indice++) {
        if (valor % indice == 0) {
            divisoresDeValor[posicao] = indice;
            posicao++;
        }
    }
    
    return divisoresDeValor;
}

int quantidadeDeDivisores(int valor) {
    int indice = 1;
    int quantidade = 0;
    for (indice; indice <= valor / 2; indice++) {
        if (valor % indice == 0) {
            quantidade++;
        }
    }
    
    return quantidade;
}

int somaDosDivisores(int valor, int *divisoresDeValor) {
    int posicao = 0;
    int quantidade = quantidadeDeDivisores(valor);
    int soma = 0;
    for (posicao; posicao < quantidade; posicao++) {
        soma = soma + divisoresDeValor[posicao];
    }
    
    return soma;
}

bool numeroPerfeito(int valor, int *divisoresDeValor) {
    int soma = somaDosDivisores(valor, divisoresDeValor);
    
    return soma == valor;
}

void main() {
    int valor;
    scanf("%d", &valor);
    
    int quantidade = quantidadeDeDivisores(valor);
    int divisoresDeValor[quantidade];
    int *divisoresDoNumero = achaDivisores(valor, divisoresDeValor);
    
    printf("%d =", valor);
    int posicao;
    for (posicao = 0; posicao < quantidade; posicao++) {
        printf(" %d ", divisoresDoNumero[posicao]);
        if(posicao != quantidade - 1) {
            printf("+");
        }
    }
    
    int soma = somaDosDivisores(valor, divisoresDoNumero);
    printf("= %d ", soma);
    
    if(numeroPerfeito(valor, divisoresDoNumero)) {
        printf("(NUMERO PERFEITO)\n");
    } else {
        printf("(NUMERO NAO E PERFEITO)\n");
    }
}