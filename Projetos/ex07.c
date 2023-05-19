/******************************************************************************
Ex 07 - algoritmo para calcular a soma de todos os elementos abaixo da diagonal
principal de uma matriz quadrada de ordem n.
*******************************************************************************/
#include <stdio.h>

int main()
{   
    // Var declaration
    int m[20][20]; // Matriz de ordem n (Max 20)
    int n; // Ordem da matriz
    int down_diagonal; // Soma dos elementos abaixo da diagonal principal da matriz n
    
    // Seção de comandos
    
    // Entrada de dados para informar o tamanho da matriz
    printf("Informe a ordem de matriz (n): ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){ // matriz com n linhas
       
        for(int j = 0; j < n; j++){ // matriz com n colunas
            
            // Adicionando elementos a matriz m 
            printf("Digite elementos para matriz, Linha[%d] Coluna[%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    // Processo: soma dos numeros abaixo da diagonal principal
    down_diagonal = 0;
    
    for(int i = 1; i < n; i++){ 
       
       for (int j = 0; j < i; j++){
           
            down_diagonal += m[i][j];
       }
    } 
   
    // Saída de dados
    printf("\nMatriz de ordem %d\n", n);
    
    for(int i = 0; i < n; i++){ // matriz com n linhas
       
        for(int j = 0; j < n; j++){ // matriz com n colunas
            
            // Imprime a matriz
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    // Imprime a soma dos elementos da D.P.
    printf("A soma dos elementos abaixo da diagonal principal é %d\n", down_diagonal);
    
    // Indica o final do progama
    printf("\nPrograma encerrado com sucesso.");
    
    return 0;
}



