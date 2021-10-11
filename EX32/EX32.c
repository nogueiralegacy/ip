#include <stdio.h>


int main(){
    int ConteudoCarbono, DurezaRockwell, ResistenciaTracao;
    scanf("%d\n%d\n%d", &ConteudoCarbono, &DurezaRockwell, &ResistenciaTracao);
    
    if(ConteudoCarbono>=7){
      printf("ACO DE GRAU = 7\n");  
                          }else if(DurezaRockwell<=50){
                                  printf("ACO DE GRAU = 8\n");
                                                      } else if(ResistenciaTracao<=80000){
                                                               printf("ACO DE GRAU = 9\n");
                                                                                         } else{
                                                                                               printf("ACO DE GRAU = 10\n");
                                                                                               }
}