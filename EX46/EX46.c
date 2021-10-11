#include <stdio.h>
#include <stdbool.h>

float mediaProvas(float dados[]) {
    int count = 1;
    float resultado = 0;
    for(count; count <= 8; count++){
        resultado = resultado + dados[count];
    }
    return (resultado / 8);
}

float mediaListas(float dados[]) {
    int count = 9;
    float resultado = 0;
    for(count; count <= 13; count++){
        resultado = resultado + dados[count];
    }
    return (resultado / 5);
}

bool frequenciaValida(float dados[]) {
    if(dados[15] > 128 * 0.75){
        return true;
    }
    return false;
}

float notaFinal(float dados[]){
    float nota = (0.7 * mediaProvas(dados)) + (0.15 * mediaListas(dados)) + (dados[14] * 0.15);
    return nota;
}

bool notasValidas(float dados[]) {
    if(notaFinal(dados) >= 6.0){
        return true;
    }
    return false;
}

int saidas(float dados[]) {
    printf("Matricula: %.0f, Nota Final: %.2f, Situacao Final:", dados[0], notaFinal(dados));
    if((notasValidas(dados)) && (frequenciaValida(dados))) {
        return printf(" Aprovado\n");
    }
    if((!notasValidas(dados)) && (!frequenciaValida(dados))) {
        return printf(" REPROVADO POR NOTA E POR FREQUENCIA\n");
    }
    if(!notasValidas(dados)) {
        return printf(" REPROVADO POR NOTA\n");
    }
    return printf(" REPROVADO POR FREQUENCIA\n");
    
}
int main() {
    float dados[16];
    int count;
    while(dados[0] != -1){
        for(count = 0; count < 16; count++) {
            scanf("%f", &dados[count]);
        }
        if(dados[0] != -1){
         saidas(dados);    
        }
    }
}