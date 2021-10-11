#include <stdio.h>

int fatorialDeN(int N) {
    if(N == 0) {
        return 1;
    }
    
    int count;
    int resultado = N;
    for(count = (N - 1); count > 0; count--) {
        resultado = resultado * count;
    }
    return resultado;
}

void main() {
    int N;
    scanf("%d", &N);
    printf("%d! = %d\n",N, fatorialDeN(N));
}