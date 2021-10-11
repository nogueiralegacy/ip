#include <stdio.h>
#include <stdbool.h>


int somaPA (int valorInicial, int razao, int N){
    int count = 0;
    int resultado = 0;
    for(count; count < N; count++) {
        resultado = resultado + (valorInicial + razao * count);
    }
    return resultado;
}

int main(){
    int valorInicial, razao, N;
    scanf("%d %d %d", &valorInicial, &razao, &N);
    printf("%d", somaPA(valorInicial, razao, N));
}
