#include <stdio.h>

float salario(int horasTrabalhadas, float valorHora) {
    float resultado = horasTrabalhadas * valorHora;
    return resultado;
}

int main () {
    int matricula = 1;
    int horasTrabalhadas;
    float valorHora;
    while (matricula != 0) {
         scanf("%d %d %f", &matricula, &horasTrabalhadas, &valorHora);
         if(matricula != 0) {
            printf("%d %.2f\n", matricula, salario(horasTrabalhadas, valorHora)); 
         }
    }
   
}