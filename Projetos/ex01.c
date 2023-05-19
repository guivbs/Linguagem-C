/******************************************************************************
Ex 01 - Matriz 
algoritmo para obter e apresentar uma matriz quadrada de ordem 3 cujos elementos 
são números inteiros positivos. 
*******************************************************************************/
#include <stdio.h>

int main()
{
    // Var declaration
    int n[3][3]; // Matriz de ordem 3
    
    // Seção de comandos
    
    // Entrada de dados 
    for(int i = 0; i < 3; i++){ // matriz com 3 colunas
       
        for(int j = 0; j < 3; j++){ // matriz com 3 colunas
            
            // Adicionando elementos a matriz n 
            printf("Digite números positivos para matriz, Linha[%d] Coluna[%d]: ", i + 1, j + 1);
            scanf("%d", &n[i][j]);
        }
    }
    
    // Saída de dados
    printf("\nMatriz de ordem 3\n");
    
    for(int i = 0; i < 3; i++){ // matriz com 3 colunas
       
        for(int j = 0; j < 3; j++){ // matriz com 3 colunas
            
            // Imprime a matriz formatada 
            printf("%d ", n[i][j]);
            
        }
        printf("\n");
    }
    
    // Indica o final do progama
    printf("\nPrograma encerrado com sucesso.");
    
    return 0;
}



