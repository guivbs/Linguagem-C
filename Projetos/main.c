/*Uma loja está levantando o valor total de todas as mercadorias em estoque. Elabore um algoritmo para
permitir ao usuário informar a quantidade e o valor de custo de cada mercadoria, calcular e exibir o valor
total em estoque e a média do valor de custo. O algoritmo deve perguntar “Mais mercadorias (S/N)?” após
o usuário informar a quantidade e valor de custo de cada mercadoria e somente continuar a entrada de
dados se a resposta for “S” ou “s”. */

#include <stdio.h>

int main()
{
    char resp;
    int quantidade;
    int unidade = 0;
    float valor;
    float media = 0;
    float valor_total = 0;
    float estoque = 0;
    
    // Seção de comandos
    
    do {    // Enquanto a resposta for igual a sim (s)
        
        // Data output
        printf("Quantidade da mercadoria: ");
        scanf("%d", &quantidade);
        printf("Valor da mercadoria: ");
        scanf("%f", &valor);
        
        valor_total = quantidade * valor;
        
        estoque += valor_total;
        
        media += valor;
        
        // Pergunta ao usuário se deseja repetir
        printf("Mais mercadorias (S/N)? \n");
        scanf(" %c", &resp);
        
        unidade++;
        
    } while (resp == 's' || resp == 'S');

    // Media de valor por produto
    media = (media / unidade);

    // Data output formatada 
    printf("valor total em estoque %.2f\n", estoque);
    printf("Média do valor de custo %.2f\n", media);

}