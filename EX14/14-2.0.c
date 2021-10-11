#include <stdio.h>

double R;
int N, P1, P2, P3, P4;

int DecomposicaoN(){
    
  P1 = N/1000;
  P2 = (N-1000*P1)/100;
  P3 = ((N-1000*P1)-100*P2)/10;
  P4 = ((N-1000*P1)-100*P2)-P3*10;
  
  return P1, P2, P3, P4;
}

int main()
{
    scanf("%lf", &R);
    int I = R;
    float Decimais = R - I;
    N = Decimais*10000;
    
    DecomposicaoN(N);
    
    int primeiracasa = (P2>4) ? (P1+1) : P1;
    int segundacasa = (P3>4) ? (P2+1) : P2;
    int terceiracasa = (P4>4) ? (P3+1) : P3;
    
    float FI = I, FP1 = P1, FP2 = P2, FP3 = P3, FP4 = P4;
    
    float Rnovo1 = (FI*10+primeiracasa)/10;
    float Rnovo2 = (FI*100+FP1*10+segundacasa)/100;
    float Rnovo3 = (FI*1000+FP1*100+FP2*10+terceiracasa)/1000;
    
    
    printf("%f\n%f\n%f\n", Rnovo1, Rnovo2, Rnovo3);
    return 0;
}
