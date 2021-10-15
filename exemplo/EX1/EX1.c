#include <stdio.h>

float Fahrenheit, Celsius, Milimetro, Polegada;

int main()
{
	scanf_s("%f", &Fahrenheit);
	scanf_s("%f", &Polegada);
	Celsius = 5 * (Fahrenheit - 32) / 9;
	Milimetro = 25.4 * Polegada;
	printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f\n", Celsius, Milimetro);
}