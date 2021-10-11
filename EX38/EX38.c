#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

/*
* verifica se com os valores fornecidos pode formar um triC"ngulo.
*/
bool triangulo (float A, float B, float C)
{
  if ((fabs (B - C) < A) && (A < B + C) && (fabs (A - C) < B) && (A + C > B)
      && (fabs (A - B) < C) && (A + B > C))
    {
      return true;
    }
  return false;
}

/*
* calcula o perC-metro de um triC"ngulo.
*/
float perimetroTriangulo (float A, float B, float C)
{
  if (triangulo (A, B, C))
    {
      return A + B + C;
    }
}

/*
* calcula a C!rea de um triC"ngulo.
*/
float areaTrapezio (float A, float B, float C)
{
  if (!triangulo (A, B, C))
    {
      return (A + B) * C / 2;
    }
}

/*
* saC-das adequadas a serem exibidas.
*/
int saidas(float A, float B, float C)
{
  if (triangulo (A, B, C))
    {
    return printf("Perimetro = %.1f\n", perimetroTriangulo(A, B, C));
    }
  return printf("Area = %.1f\n", areaTrapezio(A, B, C));

}

/*
* valores recebidos, se for possC-vel ser um triC"ndulo seram os lados desse triC"ngulo,
se nC#o seram A: a base inferior, B: base superio, C: altura de um trapC)zio .
*/
int main ()
{
    float A, B, C;
    scanf ("%f %f %f", &A, &B, &C);
  
    saidas(A, B, C);
}
