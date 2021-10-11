#include <stdio.h>

float *tabuadaDaSoma (float *resultado, float valor1, float valor2, int quantidade, float incremento) {
    int count = 0;
    printf("Tabuada de soma:\n");
    for(count; count < quantidade; count++) {
        resultado[count] = valor1 + valor2;
        printf("%.2f + %.2f = %.2f\n", valor1, valor2, resultado[count]);
        valor2 = valor2 + incremento;
    }
}

float *tabuadaDaSubtracao (float *resultado, float valor1, float valor2, int quantidade, float incremento) {
    int count = 0;
    printf("Tabuada de subtracao:\n");
    for(count; count < quantidade; count++) {
        resultado[count] = valor1 - valor2;
        printf("%.2f - %.2f = %.2f\n", valor1, valor2, resultado[count]);
        valor2 = valor2 + incremento;
    }
}

float *tabuadaDaMultiplicacao (float *resultado, float valor1, float valor2, int quantidade, float incremento) {
    int count = 0;
    printf("Tabuada de multiplicacao:\n");
    for(count; count < quantidade; count++) {
        resultado[count] = valor1 * valor2;
        printf("%.2f x %.2f = %.2f\n", valor1, valor2, resultado[count]);
        valor2 = valor2 + incremento;
    }
}

float *tabuadaDaDivisao (float *resultado, float valor1, float valor2, int quantidade, float incremento) {
    int count = 0;
    printf("Tabuada de divisao:\n");
    for(count; count < quantidade; count++) {
        resultado[count] = valor1 / valor2;
        printf("%.2f / %.2f = %.2f\n", valor1, valor2, resultado[count]);
        valor2 = valor2 + incremento;
    }
}

int main(){
    float valor1;
    float valor2;
    int quantidade;
    float incremento;
    
    scanf("%f\n%f\n%d\n%f", &valor1, &valor2, &quantidade, &incremento);
    
    float resultado[quantidade];
    
    tabuadaDaSoma(resultado, valor1, valor2, quantidade, incremento);
    tabuadaDaSubtracao(resultado, valor1, valor2, quantidade, incremento);
    tabuadaDaMultiplicacao(resultado, valor1, valor2, quantidade, incremento);
    tabuadaDaDivisao(resultado, valor1, valor2, quantidade, incremento);
}