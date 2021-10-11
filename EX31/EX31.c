#include <stdio.h>

int data, dia, mes, ano;

int main(){
    scanf("%d", &data);

    dia = data/(1000*1000);
    mes = (data-dia*1000*1000)/10000;
    ano = ((data-dia*1000*1000)-10000*mes);
    
 const char* mesEscrito(){ 
if(mes==01){
    return "janeiro";
          } else if(mes==02){
                   return "fevereiro";
                           } else if(mes==03){
                                    return "marco";
                                             }else if(mes==04){
                                                     return "abril";
                                                             }else if(mes==05){
                                                                     return "maio";
                                                                             }else if(mes==06){
                                                                                     return "junho";
                                                                                             }else if(mes==07){
                                                                                                     return "julho";
                                                                                                             }else if(mes == 8){
                                                                                                                     return "agosto";
                                                                                                                             }else if(mes==9){
                                                                                                                                     return "setembro";
                                                                                                                                             }else if(mes==10){
                                                                                                                                                     return "outubro";
                                                                                                                                                             }else if(mes==11){
                                                                                                                                                                     return "novembro";
                                                                                                                                                                             }else if(mes==12){
                                                                                                                                                                                     return "dezembro";
                                                                                                                                                                                             }
}         
    if((mes>12) || (dia>31)){
      printf("Data invalida!\n");
                            } else if((mes==2) && (dia>28)){
                                     printf("Data invalida!\n");
                                                           } else {
                                                                    printf("%.2d de %s de %.4d\n", dia, mesEscrito(mes), ano);
                                                                   }
}