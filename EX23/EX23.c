#include <stdio.h>



int main(){
    
float Nota;	

	scanf("%f", &Nota);
	if ((Nota<=10) && (Nota >= 9.0)){
		
     printf ("NOTA = %.1f CONCEITO = A\n", Nota);
     
	}else if (Nota >= 7.5){
		
     printf ("NOTA = %.1f CONCEITO = B\n", Nota);
     
	}else if (Nota >= 6){
		
     printf ("NOTA = %.1f CONCEITO = C\n", Nota);
     
	}else {
		
     printf ("NOTA = %.1f CONCEITO = D\n", Nota);
     
     return 0;
	}
}