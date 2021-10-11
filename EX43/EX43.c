#include <stdio.h>
#include <stdbool.h>

int par(int valorInicial) {
    if(valorInicial % 2 == 0){
        return true;
    }
    return false;
}

int sequenciaDePares(int valorInicial, int quantidade) {
    int pares = valorInicial;
    int count = quantidade;
    if(par(valorInicial)) {
    for(count; count > 0; count--) {
           printf("%d ", pares);
           pares = pares + 2;
       }        
    } else {
        printf("O PRIMEIRO NUMERO NAO E PAR");
    }
}

int main(){
    int valorInicial, quantidade;
    scanf("%d %d\n", &valorInicial, &quantidade);
    sequenciaDePares(valorInicial, quantidade);
    printf("\n");
}