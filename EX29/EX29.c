#include <stdio.h>
#include <math.h>

float a, b, c, R1, R2, Delta;


int main(){
    
    scanf("%f %f %f", &a, &b, &c);
    
    Delta = sqrt(b*b - 4*a*c);
    R1 = ((-b)+Delta)/(2*a);
    R2 = ((-b)-Delta)/(2*a);
    
    if(Delta>0){
      printf("RAIZES DISTINTAS\nX1 = %.2f\nX2 = %.2f\n", R1, R2);
               } else if(Delta==0){
                          printf("RAIZ UNICA\nX1 = %.2f\n", R1);
                                    } else {
                                            printf("RAIZES IMAGINARIAS\n"); 
                                                     }
}