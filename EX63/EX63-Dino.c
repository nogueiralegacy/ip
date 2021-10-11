#include <stdio.h>

int main() {
  int cod, num_vend,cont10=0, cont15=0,cont22=0,codmv,cdml, mvenda=0;
  float pc, pv,mlucro=0.0,totalv=0.0,totalcomp=0.0,totallucro,lucro,porc, porctotal;
   cod =1;
    
    while(scanf("%d %f %f %d",&cod,&pc, &pv, &num_vend)!=EOF) {
     totalcomp = totalcomp + pc*num_vend;
     totalv = totalv + pv*num_vend;
     lucro = pv - pc;
     porc = (lucro/pc)*100.0;
     if(mlucro<lucro) {
        mlucro = lucro;
        cdml = cod;
       }
      if(mvenda<num_vend) {
         mvenda = num_vend;
         codmv = cod;
        }
      if(porc<10)
         cont10++;
        else if(porc <20)
                cont15++;
                else cont22++;
        }
       totallucro = (totalv - totalcomp);
       porctotal = (totallucro/totalcomp)*100.0;
       printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n",cont10);
       printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n",cont15);
       printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n",cont22);
       printf("Codigo da mercadoria que gerou maior lucro: %d\n",cdml);
       printf("Codigo da mercadoria mais vendida: %d\n",codmv);
       printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n",totalcomp, totalv,porctotal);
       
return 0;
}