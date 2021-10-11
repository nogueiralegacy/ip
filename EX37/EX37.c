#include <stdio.h>
#include <stdbool.h>

/*
* verifica se o estudante é cotista ou não.
*/
bool cotista(int instituicaoEscolar){
    if(instituicaoEscolar == 2){
        return true;
    }
    return false;
}

/*
* verifica se o estudante cotista tem renda familiar brta per capita superior a 1.5 do salário mínimo ou não.
*/
bool independenteDaRenda(float salarioFamiliar, int membrosFamiliares){
    float salarioMin = 937.00;
    float rendaPerCapita = salarioFamiliar / membrosFamiliares;
    if (rendaPerCapita > 1.5 * salarioMin){
        return true;
    }
    return false;
}

/*
* verifica se o estudante cotista é auto-declarado branco ou não.
*/
bool branco(int etinia){
    if(etinia == 4){
        return true;
    }
    return false;
}

/*
* retorna se o aluno é cotista ou não.
*/
char *saidaCotista(int instituicaoEscolar){
    if(cotista(instituicaoEscolar)){
        return "ALUNO COTISTA";
    }
    return "ALUNO NAO COTISTA";
}

/*
* se o estudante for cotista verifica em qual categoria de cotas ele se encaixa.
*/
char *categoriaDeCotas(float salarioFamiliar, int membrosFamiliares, int instituicaoEscolar, int etinia){
    if(cotista(instituicaoEscolar)){
        if((independenteDaRenda(salarioFamiliar, membrosFamiliares)) && (branco(etinia))){
            return "(L3)";
        } 
        if((independenteDaRenda(salarioFamiliar, membrosFamiliares)) && (!branco(etinia))){
            return "(L4)";
        }
        if((!independenteDaRenda(salarioFamiliar, membrosFamiliares)) && (branco(etinia))){
            return "(L1)";
        } 
        if((!independenteDaRenda(salarioFamiliar, membrosFamiliares)) && !(branco(etinia))){
            return "(L2)";
        }
    } else {
        return "\0";
    }
}

int main(){
    float salarioFamiliar;
    int membrosFamiliares, instituicaoEscolar, etinia;
    
    scanf("%f %d %d %d", &salarioFamiliar, &membrosFamiliares, &instituicaoEscolar, &etinia);
    printf("%s %s\n", saidaCotista(instituicaoEscolar), categoriaDeCotas(salarioFamiliar, membrosFamiliares, instituicaoEscolar, etinia));
}
