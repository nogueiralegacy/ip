#include <stdio.h>
#include <math.h>

float ArestaHexagono, AlturaPiramide, AreaBasePiramide, VolumePiramide;

int main(){
  scanf("%f %f", &AlturaPiramide, &ArestaHexagono);
  AreaBasePiramide = 1.5*ArestaHexagono*ArestaHexagono*sqrt(3);
  VolumePiramide = AreaBasePiramide*AlturaPiramide/3.0;
  printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", VolumePiramide);
}