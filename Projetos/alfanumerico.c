/*algoritmo para solicitar ao usuário o código alfanumérico e o preço de 15 produtos, exibir o
código e o preço do produto com maior preço, calcular e exibir a média aritmética dos preços dos
produtos.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // Seção de declaração de variáveis
    char alfanumerico[5];
    char codigo[5];
    float preco; 
    float maiorpreco = -1;
    float media = 0;
    int x;
    
    // Seção de comandos
    
   for (x = 1; x < 3; x++){ // Repete 14 vezes
       
        // Entrada de dados 
        printf("Digite um código alfanumérico:\n ");
        scanf("%s", alfanumerico);
        printf("Digite o valor do produto:\n ");
        scanf("%f", &preco);
       
        media += preco;
       
        if (preco > maiorpreco) {    // Verifica se valor é maior que o atual
            maiorpreco = preco;    //  // Substitui
            strcpy(codigo, alfanumerico); // Copia o alfanumerico
        }
        
   }
   
    // Divide a media pelo total de produtos
    media = media / 15;
    
    // Saída de dados
    printf("Produto com maior preço: Código %s - Preço R$ %.2f\n", codigo, maiorpreco);
    printf("Média dos preços dos produtos: %.2f", media);
    
}
