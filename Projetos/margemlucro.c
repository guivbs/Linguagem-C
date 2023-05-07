#include <stdio.h>

int main()
{
    // Var declaration
    float custo, venda, lucro; // var de custo, venda e custo;
    float margem, porcen; // porcentagem de lucro
    
    // Data input
    printf("Digite o valor de despesas do produto: ");
    scanf("%f", &custo);
    printf("Digite o valor da venda do produto: ");
    scanf("%f", &venda);
    
    // Process
    lucro = venda - custo;
    margem = lucro / venda;
    porcen = margem * 100;
    
    // Data ouput
    printf("O lucro da venda do produto foi %.f %%", porcen);
    

    return 0;
}