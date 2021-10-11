#include <stdio.h>


int main(){
    int Matricula, Dependentes;
    float SalarioMin, SalarioIndivido, TaxaImpostosPaga, TaxaPorSalario, ImpostoBruto, ImpostoLiquido, Resultado;
    
    scanf("%d %f %d %f %f", &Matricula, &SalarioMin, &Dependentes, &SalarioIndivido, &TaxaImpostosPaga);
    
    printf("MATRICULA = %d\n", Matricula);
    
    if(SalarioIndivido<=5*SalarioMin){
        TaxaPorSalario = 0;
                                     } else if(SalarioIndivido<=12*SalarioMin){
                                              TaxaPorSalario = 0.08;
                                                                              } else{
                                                                                    TaxaPorSalario = 0.2;
                                                                                    }
    ImpostoBruto = SalarioIndivido*TaxaPorSalario;
    ImpostoLiquido = ImpostoBruto-Dependentes*300;
    Resultado = ImpostoLiquido-(TaxaImpostosPaga/100)*SalarioIndivido;
    
    printf("IMPOSTO BRUTO = %.2f\n", ImpostoBruto);
    printf("IMPOSTO LIQUIDO = %.2f\n", ImpostoLiquido);
    printf("RESULTADO = %.2f\n", Resultado);
   
    if(Resultado>0){
        printf("IMPOSTO A PAGAR\n");
                   } else if(Resultado == 0){
                            printf("IMPOSTO QUITADO\n");
                                            } else{
                                                  printf("IMPOSTO A RECEBER\n");
                                                  }
                                                                                    
}