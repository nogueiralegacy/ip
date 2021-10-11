#include <stdio.h>

int N, N1, N2, N3, N4, NovoN;

int main()
{
 scanf("%3d", &N);
 
 N1 = N/100;
 N2 = (N-N1*100)/10;
 N3 = ((N-N1*100)-N2*10);
 N4 = (N1+N2*3+N3*5)%7;
 
 NovoN = N1*1000+N2*100+N3*10+N4;
 
 printf("O NOVO NUMERO E = %d\n", NovoN);
}
  

