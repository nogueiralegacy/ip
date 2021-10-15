/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#pragma warning(disable:4996)

float fahrenheit, Celsius, Milimetro, Polegada;

int main()
{
	scanf("%f", &fahrenheit);
	scanf("%f", &Polegada);
	Celsius = 5 * (fahrenheit - 32) / 9;
	Milimetro = 25.4 * Polegada;
	printf("O VALOR EM CELSIUS = %.2f\nA QUANTIDADE DE CHUVA E = %.2f\n", Celsius, Milimetro);
}