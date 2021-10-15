#include <stdio.h>
#pragma warning(disable:4996)

int N1, N2, N3, NJuntos;

int main()
{
 scanf("%d", &N1);       // Recebendo os numeros.
 scanf("%d", &N2);
 scanf("%d", &N3);

 if (N1>-10 & N1<10 & N2>-10 & N2<10 & N3>-10 & N3<10){   // Caso os numeros concedidos sejam unitarios, mostrar a concatenação deles e o quadrado desse numero formado.
 
 NJuntos = abs(N1)*100+abs(N2)*10+abs(N3);
 
 printf("%d, %d\n", NJuntos, NJuntos*NJuntos);
} 
 else {
    printf("DIGITO INVALIDO\n");
}
}
