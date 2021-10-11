#include <stdio.h>

/*
* retorna o maior número entre os 4 números fornecidos. 
*/
float maiorNumero (float numero1, float numero2, float numero3, float numero4){
    float maiorEntreN1EN2 = (numero1 > numero2) ? numero1 : numero2;
    float maiorEntreN3EN4 = (numero3 > numero4) ? numero3 : numero4;
    float maiorNumero = (maiorEntreN1EN2 > maiorEntreN3EN4) ? maiorEntreN1EN2 : maiorEntreN3EN4;
    return maiorNumero;
}

/*
* retorna o menor número entre os 4 números fornecidos. 
*/
float menorNumero(float numero1, float numero2, float numero3, float numero4){
    float menorEntreN1EN2 = (numero1 > numero2) ?  numero2 : numero1;
    float menorEntreN3EN4 = (numero3 > numero4) ? numero4 : numero3;
    float menorNumero = (menorEntreN1EN2 > menorEntreN3EN4) ? menorEntreN3EN4 : menorEntreN1EN2;
    return menorNumero;
}

/*
* retorna o segundo maior número entre os 4 números fornecidos. 
*/
float segundoMaiorNumero(float numero1, float numero2, float numero3, float numero4){
    float maiorEntreN1EN2 = (numero1 > numero2) ? numero1 : numero2;
    float maiorEntreN3EN4 = (numero3 > numero4) ? numero3 : numero4;
    float segundoMaiorNumero = (maiorEntreN1EN2 > maiorEntreN3EN4) ? maiorEntreN3EN4 : maiorEntreN1EN2;
    return segundoMaiorNumero;
}

/*
* retorna o segundo menor número entre os 4 números fornecidos. 
*/
float segundoMenorNumero(float numero1, float numero2, float numero3, float numero4){
    float menorEntreN1EN2 = (numero1 > numero2) ?  numero2 : numero1;
    float menorEntreN3EN4 = (numero3 > numero4) ? numero4 : numero3;
    float segundoMenorNumero = (menorEntreN1EN2 > menorEntreN3EN4) ? menorEntreN1EN2 : menorEntreN3EN4;
    return segundoMenorNumero;
} 

/*
* retorna o número de acordo com a sua posição. 
*/
float ordem(int posicao, float numero1, float numero2, float numero3, float numero4){
    if(posicao == 1){
        return menorNumero(numero1, numero2, numero3, numero4);
    }
    if(posicao == 2){
        return segundoMenorNumero(numero1, numero2, numero3, numero4);
    }
    if(posicao == 3){
        return segundoMaiorNumero(numero1, numero2, numero3, numero4);
    }
    if(posicao == 4){
    return maiorNumero(numero1, numero2, numero3, numero4);
}
}


int main (){
    float numero1, numero2, numero3, numero4;
    
    scanf("%f\n%f\n%f\n%f", &numero1, &numero2, &numero3, &numero4);
    printf("%.2f, %.2f, %.2f, %.2f\n", ordem(1, numero1, numero2, numero3, numero4), ordem(2, numero1, numero2, numero3, numero4), ordem(3, numero1, numero2, numero3, numero4), ordem(4, numero1, numero2, numero3, numero4));
}