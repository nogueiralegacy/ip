#include <stdio.h>

int N, Q100, Q50, Q10, Q1;

int main()
{
  scanf("%d", &N);
  Q100 = N/100;
  Q50 = (N-100*Q100)/50;
  Q10 = ((N-100*Q100)-50*Q50)/10;
  Q1 = (((N-100*Q100)-50*Q50)-10*Q10);
  printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n",Q100, Q50, Q10, Q1);
    return 0;
}
