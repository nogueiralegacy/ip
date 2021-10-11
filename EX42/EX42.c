#include <stdio.h>

int valoresAoQuadrado(int valor) {
    int pares;
    int count = 1;
    for(count; count <= valor / 2; count++){
        pares = count * 2;
        printf("%d^2 = %d\n", pares, pares * pares);
    }
}


int main(){
    int valor;
    scanf("%d", &valor);
    valoresAoQuadrado(valor);
}