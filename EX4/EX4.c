#include <stdio.h>
int Horas, Min, Seg, SegTotal;
int main()
{
 scanf("%d", &Horas);
 scanf("%d", &Min);
 scanf("%d", &Seg);
 
 SegTotal = Horas*3600+Min*60+Seg;
 
 printf("O TEMPO EM SEGUNDOS E = %d\n", SegTotal);
}
