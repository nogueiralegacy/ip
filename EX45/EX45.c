#include <stdio.h>
#include <stdbool.h>

bool valido(float N) {
    int inteiroN = N;
    if((inteiroN == N) && (inteiroN > 1)) {
        return true;
    }
    return false;
}
double somaDeTermos(int N) {
    int count = 1;
    double resultado = 1.0;
    for(count; count < N; count++) {
        resultado = resultado + (1.0 / (count + 1.0));
    }
    return resultado;
}


int main(){
    float N;
    scanf("%f", &N);
    if(valido(N)){
        return printf("%lf\n", somaDeTermos(N));
    }
    return printf("Numero invalido!\n");
}

