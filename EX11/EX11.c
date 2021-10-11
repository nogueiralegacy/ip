#include <stdio.h>
#include <math.h>

double a, m, t, S, W, v; // aceleracao, massa(toneladas), tempo, distancia, trabalho, velocidade(KM/h).

int main()
{
  scanf("%lf", &m);
  scanf("%lf", &a);
  scanf("%lf", &t);
  
  v = a*t*3.6;
  S = a*t*t/2;
  W = 1000*m*a*S;
  
  printf("VELOCIDADE = %.2f\nESPACO PERCORRIDO = %.2f\nTRABALHO REALIZADO = %.2f\n", v, S, W);
}

