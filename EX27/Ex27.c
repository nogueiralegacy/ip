#include <stdio.h>

int N, P1, P2, P3, P4;

int DecomposicaoN(){
  P1 = N/1000;
  P2 = (N-1000*P1)/100;
  P3 = ((N-1000*P1)-100*P2)/10;
  P4 = ((N-1000*P1)-100*P2)-P3*10;
  
  return P1, P2, P3, P4;
}
const char* Ordem(){

  if(P1!=0){
      return "(quarta ordem)";
    } else if(P2!=0){
               return "(terceira ordem)";
              } else if(P3!=0){
                         return "(segunda ordem)"; 
                        } else if(P4!=0) {
                                 return "(primeira ordem)";
                                }
}

int PluralP1(){
    if(P1==1){
        return printf("%d unidade de milhar", P1);
            } else if(P1!=0) {
                     return printf("%d unidades de milhar", P1);
                             }          
}

int PluralP2(){
    if(P2==1){
        return printf("%d centena", P2);
            } else if(P2!=0) {
                     return printf("%d centenas", P2);
                             }          
}

int PluralP3(){
    if(P3==1){
        return printf("%d dezena", P3);
            } else if(P3!=0) {
                     return printf("%d dezenas", P3);
                             }          
}

int PluralP4(){
    if(P4==1){
        return printf("%d unidade", P4);
            } else if(P4!=0) {
                     return printf("%d unidades", P4);
                             }          
}


int PlusP1()
{
    if(P1!=0){
       if(P2!=0 || P3!=0 || P4!=0){
           return printf(" + ");
                                  }
             }
}

int PlusP2()
{
    if(P2!=0){
       if(P3!=0 || P4!=0){
           return printf(" + ");
                         }
             }
}

int PlusP3()
{
    if(P3!=0){
       if( P4!=0){
           return printf(" + ");
                 }
             }
}


int NumberP1(){
    if(P1==1){
        return printf("%d", P1*1000);
            } else if(P1!=0) {
                     return printf("%d", P1*1000);
                             }          
}

int NumberP2(){
    if(P2==1){
        return printf("%d", P2*100);
            } else if(P2!=0) {
                     return printf("%d", P2*100);
                             }          
}

int NumberP3(){
    if(P3==1){
        return printf("%d", P3*10);
            } else if(P3!=0) {
                     return printf("%d", P3*10);
                             }          
}

int NumberP4(){
    if(P4==1){
        return printf("%d", P4);
            } else if(P4!=0) {
                     return printf("%d", P4);
                             }          
}


int main()
{
  scanf("%d", &N);
    
  if((N<0) || (N>9999)){
    printf("Numero invalido!");
                        } else {
                              printf("%s %d = ", Ordem(DecomposicaoN(N)), N);
                               PluralP1(DecomposicaoN(N));
                               PlusP1(DecomposicaoN);
                               PluralP2(DecomposicaoN(N));
                               PlusP2(DecomposicaoN);
                               PluralP3(DecomposicaoN(N));
                               PlusP3(DecomposicaoN);
                               PluralP4(DecomposicaoN(N));
                               printf(" = ");
                               NumberP1(DecomposicaoN);
                               PlusP1(DecomposicaoN);
                               NumberP2(DecomposicaoN);
                               PlusP2(DecomposicaoN);
                               NumberP3(DecomposicaoN);
                               PlusP3(DecomposicaoN);
                               NumberP4(DecomposicaoN);
                               printf("\n");
                                }
}