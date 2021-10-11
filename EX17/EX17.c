#include <stdio.h>

int N, P1, P2, P3, NovoN;

int main()
{
  scanf("%d", &N );
  P1 = N/100;
  P2 = (N-100*P1)/10;
  P3 = ((N-100*P1)-10*P2)/1;
  
  NovoN = P3*100+P2*10+P1;
  
  printf("%.3d\n", NovoN);

}
