#include <stdio.h>


int main () {
    int quantidadeDeTimes;
   scanf("%d", &quantidadeDeTimes);
   int primeiroTime = 1;
   int segundoTime = 2;
   int count;
   int recursao = quantidadeDeTimes;
   int finais = 1;
   for(count = 1; count <= recursao - 1;count++) {
       printf("Final %d: Time%d X Time%d\n", finais, primeiroTime, segundoTime);
       segundoTime++;
       if(count == recursao - 1) {
           count = 0;
           recursao--;
           primeiroTime++;
           segundoTime = primeiroTime + 1; 
       }
       finais++;
   }
       
}