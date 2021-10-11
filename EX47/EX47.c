#include <stdio.h>

int anosParaIgualarPopulacao (int popA, int popB) {
    float NewPopA = popA, NewPopB = popB;
    int years = 0;
    while (NewPopA < NewPopB) {
        NewPopA = NewPopA * 1.03;
        NewPopB = NewPopB * 1.015;
        years++;
    }
    return years;
}

int main(){
    int popA, popB;
    scanf("%d\n%d", &popA, &popB);
    printf("ANOS = %d\n", anosParaIgualarPopulacao(popA, popB));
}