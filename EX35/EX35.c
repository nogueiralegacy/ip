#include <stdio.h>

/*
* descobre o maior valor fornecido.
*/
int maiorNumero(int numero1,int  numero2, int numero3){
   int maiorEntreN1eN2 = (numero1 > numero2) ? numero1 : numero2;
   int maiorNumero = (maiorEntreN1eN2 > numero3) ? maiorEntreN1eN2 : numero3;
   
   return maiorNumero;
}

/*
* descobre o menor valor fornecido.
*/
int menorNumero(int numero1, int numero2, int numero3){
   int menorEntreN1eN2 = (numero1 > numero2) ? numero2 : numero1;
   int menorNumero = (menorEntreN1eN2 > numero3) ? numero3 : menorEntreN1eN2;
   
   return menorNumero;
}

/*
* descobre o valor intermediário fornecido.
*/
int numeroDeValorIntermediario(int numero1, int numero2, int numero3){
    int numeroDeValorIntermediario = numero1 + numero2 + numero3 - menorNumero(numero1, numero2, numero3) - maiorNumero(numero1, numero2, numero3);

    return numeroDeValorIntermediario;
}

/*
* transforma a letra recebida em um numero ascii.
*/
int letraEmAscii(char ordem){
    int Ascii = (int) ordem;
    return Ascii;
}

/*
* de acordo com o valor ascii recebido da função "letraEmAscii(char ordem)" é retornado a variável relacionada;
* A -> 65;
* B -> 66;
* C -> 67;
*/
int findOrdem(int Ascii, int numero1, int numero2, int numero3){
    int A = menorNumero(numero1, numero2, numero3), B = numeroDeValorIntermediario(numero1, numero2, numero3), C = maiorNumero(numero1, numero2, numero3);

    if(Ascii == 65){
        return A;
    } 
    if(Ascii == 66){
        return B;
    }
    return C;

}

int main(){
    int numero1, numero2, numero3;
    char primeiro, segundo, terceiro;
    scanf("%d %d %d\n", &numero1, &numero2, &numero3);
    scanf("%c%c%c", &primeiro, &segundo, &terceiro);
    if ((numero1 <= 100) && (numero2 <= 100) && (numero3 <= 100)){
    printf("%d %d %d\n ", findOrdem(letraEmAscii(primeiro), numero1, numero2, numero3), findOrdem(letraEmAscii(segundo), numero1, numero2, numero3), findOrdem(letraEmAscii(terceiro), numero1, numero2, numero3));
}
    return 0;
}