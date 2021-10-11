#include <stdio.h>

float N1, N2, N3;

float Sequencia(){
  float a = (N1>N2) ? N1 : N2;
  float b = (N1>N2) ? N2 : N1; 
  
  float Nmaior = (N3>a) ? N3 : a;
  float Nmenor = (N3>b) ? b : N3;
  
  if(Nmaior!=N1 && Nmenor!=N1){
    return printf("%.2f, %.2f, %.2f\n", Nmenor, N1, Nmaior);             
                } else if(Nmaior!=N2 && Nmenor!=N2){
                         return printf("%.2f, %.2f, %.2f\n", Nmenor, N2, Nmaior);
                                                   } else {
                                                         printf("%.2f, %.2f, %.2f\n", Nmenor, N2, Nmaior);
                                                          }
}

 
int main(){
    scanf("%f", &N1);
    scanf("%f", &N2);
    scanf("%f", &N3);
    
    Sequencia(N1, N2, N3);
}