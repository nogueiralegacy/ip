#include <stdio.h>

float maiorNumero(float A, float B, float C){
    float maiorEntreAeB = (A > B) ? A : B;
    return (maiorEntreAeB > C) ? maiorEntreAeB : C;
}

float menorNumero(float A, float B, float C){
    float menorEntreAeB = (A > B) ? B : A;
    return (menorEntreAeB > C) ? C : menorEntreAeB;
}

float numeroIntermediario(float A, float B, float C){
    float maior = maiorNumero(A, B, C);
    float menor = menorNumero(A, B, C);
    if(A != maior && A != menor){
        return A;
    }
    if((B != maior) && (B != menor)){
        return B;
    }
    return C;
}

float saidas(int i, float A, float B, float C){
    if(i == 1){
        return printf("%.2f %.2f %.2f\n", menorNumero(A, B, C), numeroIntermediario(A, B, C), maiorNumero(A, B, C));
    }
    if(i == 2){
        return printf("%.2f %.2f %.2f\n", maiorNumero(A, B, C), numeroIntermediario(A, B, C), menorNumero(A, B, C));
    }
    if(i == 3){
        return printf("%.2f %.2f %.2f\n", numeroIntermediario(A, B, C), maiorNumero(A, B, C), menorNumero(A, B, C));
}
}
int main(){
    int i;
    float A, B, C;
    scanf("%d\n", &i);
    scanf("%f\n", &A);
    scanf("%f\n", &B);
    scanf("%f", &C);
    
    saidas(i, A, B, C);
}