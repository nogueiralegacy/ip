#include <stdio.h>

int count = 8, N, P1, P2, P3, P4, P5, P6, P7, P8;

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
printf("%d%d%d%d%d%d%d%d\n", P8, P7, P6, P5, P4, P3, P2, P1);

} else {
  printf ("Numero invalido!\n");
}
}