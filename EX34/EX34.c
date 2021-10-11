#include <stdio.h>
int contador;
int valor;


int potencia(int base, int expoente){
    int x = base;
    if (expoente > 1){
       for(expoente; expoente != 1; expoente = expoente - 1){
        x = x * base;
                                                            }
            return x;
                     } else if(expoente == 0){
                              return 1;
                                             }
}


int numeroDeDigitos(){
    int N = valor;
    int count = 0;
    
    while(N != 0){
    N = N / 10;
    count = count + 1;
    }
    return count;
}


int identificadorDeDigitos(int posicao){    // posicao comeca a contar a partir do 0;
    int digito = (valor / potencia(10, posicao)) % 10;
    return digito;
}


void  comparadorDeDigitos(){
    contador = 0;
    int posicoesIniciais = 0;
    int posicoesFinais = numeroDeDigitos();
    while ((numeroDeDigitos() / 2 != contador) && (identificadorDeDigitos(posicoesIniciais) == identificadorDeDigitos(posicoesFinais - 1))){
        contador = contador + 1;
        posicoesIniciais = posicoesIniciais + 1;
        posicoesFinais = posicoesFinais - 1;
    }
}

 void casosDeSaida(){
    comparadorDeDigitos();
    if(numeroDeDigitos() > 5){
        printf("NUMERO INVALIDO\n");
                             } else if(contador == numeroDeDigitos() / 2){
                                  printf("PALINDROMO\n");
                                                                         } else if(contador != numeroDeDigitos() / 2) {
                                                                           printf("NAO PALINDROMO\n");
                                                                              }
}

int main(){

    scanf("%d", &valor);
    
    casosDeSaida();
}