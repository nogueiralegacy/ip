#include <stdio.h>

double fahrenheitCelsius(double fahrenheit) {
    double celsius = 5 * (fahrenheit - 32) / 9;
    return celsius;
}

int main(){
    double fahrenheit;
    int numeroDeConversoes;
    scanf("%d", &numeroDeConversoes);
    for(numeroDeConversoes; numeroDeConversoes > 0; numeroDeConversoes--) {
        scanf("%lf", &fahrenheit);
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", fahrenheit, fahrenheitCelsius(fahrenheit));
    }
}