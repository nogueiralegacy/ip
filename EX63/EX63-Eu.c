#include <stdio.h>

void main() {
    int codigoDeBarras;
    float valorDeCompra;
    float valorDeVenda;
    int qntVendida;

    float lucro;
    float lucroPercentual;
    
    int qntProdutosLucroMenorDe10 = 0;
    int qntProdutosLucroMenorOuIgualA20 = 0;
    int qntProdutosLucroMaiorA20 = 0;
 
    float maiorLucro = 0.0;
    
    int codigoDeBarrasDoMaisLucrativo; 
    
    float faturamento = 0.0;
    float investimento = 0.0;
    
    int codigoDeBarrasDoMaisVendido;
    
    int maisVendida = 0;
    
    while(scanf("%d %f %f %d", &codigoDeBarras, &valorDeCompra, &valorDeVenda, &qntVendida) != EOF) {
        lucro = (valorDeVenda - valorDeCompra) * qntVendida;
    lucroPercentual = (lucro / valorDeCompra * qntVendida) * 100;
    
    if(lucroPercentual < 10) {
        qntProdutosLucroMenorDe10++;
    } else if (lucroPercentual <= 20) {
            qntProdutosLucroMenorOuIgualA20++;
        } else {
                qntProdutosLucroMaiorA20++;
            }
            
    
    if(lucro > maiorLucro) {
        maiorLucro = lucro;
        codigoDeBarrasDoMaisLucrativo = codigoDeBarras;
    }
    
    faturamento = faturamento + valorDeVenda * qntVendida;
    investimento = investimento + valorDeCompra * qntVendida;
    
    
    if(qntVendida > maisVendida) {
        codigoDeBarrasDoMaisVendido = codigoDeBarras;
    }
    }
    float lucroTotal = (faturamento - investimento);
    float lucroTotalPercentual = (lucroTotal / investimento) * 100;
    
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", qntProdutosLucroMenorDe10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", qntProdutosLucroMenorOuIgualA20);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", qntProdutosLucroMaiorA20);
    printf("Codigo da mercadoria que gerou maior lucro: %d\n", codigoDeBarrasDoMaisLucrativo);
    printf("Codigo da mercadoria mais vendida: %d\n", codigoDeBarrasDoMaisVendido);
    printf("Valor total de compras: %f, valor total de vendas: %f e percentual de lucro total: %f\n", investimento, faturamento, lucroTotalPercentual);
}
