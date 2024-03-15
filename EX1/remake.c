#include <stdio.h>

float fahrenheitParaCelsius(float tempFahrenheit) {
    float tempCelsius = 5 * (tempFahrenheit - 32) / 9;

    return tempCelsius;
}

float polegadaParaMilimetro(float distanciaPolegada) {
    float distanciaMilimetro = 25.4 * distanciaPolegada;

    return distanciaMilimetro;
}

int main() {
    float tempFahrenheit;
    float distanciaPolegada;

    scanf("%f", &tempFahrenheit);
    scanf("%f", &distanciaPolegada);

    printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f", fahrenheitParaCelsius(tempFahrenheit), polegadaParaMilimetro(distanciaPolegada));

}
