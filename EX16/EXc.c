#include <stdio.h>

int count = 8, N, Nb, P1, P2, P3, P4, P5, P6, P7, P8;

int base, expoente;

int potencia(int base, int expoente){
    int resultado;
    int x = base;
    if (expoente == 1) {
        return base;
    }else if (expoente == 0){
        return 1;
    }
 else {   while (expoente > 1){
        x = x*base;
        expoente = expoente - 1;
}
        return x;
     
}
}

int main()
{
  scanf("%d", &N);

if (0 <= N && N <= 255) {
while(count != 0){
if(count == 8){
    P1 = N%2;
}

if(count == 7){
    P2 = N%2;
}

 if(count == 6){
    P3 = N%2;
}

 if(count == 5){
    P4 = N%2;
}

 if(count == 4){
    P5 = N%2;
}

 if(count == 3){
    P6 = N%2;
}

 if(count == 2){
    P7 = N%2;
}

 if(count == 1){
    P8 = N%2;
}


  N = N/2;  
 count = count - 1;
}

 Nb = P8*potencia(10,7)+P7*potencia(10,6)+P6*potencia(10,5)+P5*potencia(10,4)+P4*potencia(10,3)+P3*potencia(10,2)+P2*potencia(10,1)+P1*potencia(10,0);
 
printf("%.8d", Nb);
} else {
printf ("Numero invalido!");
}
}