/******************************************************************************
Elabore um algoritmo para calcular a matriz transposta de uma matriz n x m. 
Apresentar no final a matriz original e a matriz transposta.
matriz original = n linhas x m colunas
matriz transposta = m x n troca ordenada das linhas pelas colunas de uma matriz original
*******************************************************************************/
#include <stdio.h>
#define MAX 25

int main (){
    
    // Declaração de variáveis
    int n,  // Variável para tamanho da linha 
        m;  // Variável para tamanho da caluna
    int i, j; // Variáveis de controle (contadores)
    int mat[MAX][MAX]; // Matriz de n x m elementos
    
    // Seção de comandos
    
    // Entrada de dados para informar o tamanho da matriz
    printf("Informe o tamanho de n (Linha): ");
    scanf("%d", &n);
    
    printf("Informe o tamanho de m (Coluna): ");
    scanf("%d", &m);
    
    if (n < 0 || m < 0 && n > 25 || m > 25) {   // Verifica se o valor de n e m são < 0 
        
        // Indica ao usuário que o programa não foi executado
        printf("\nDigite valores positivos maiores que 0 para linhas e colunas e menores que 25.\n");    
        printf("O programa não foi executado.\n");
        return 0;
    }
    
    // Processamento: Entrada de valores para a matriz de n x m 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) { 
            printf("Digite valores para a matriz [%d][%d]:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    // Saída de dados com formatação 
    
    printf("\nMatriz original:\n"); // Imprime a matriz original n x m
    for (i = 0; i < n; i++) { 
        for (j = 0; j < m; j++) { 
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz transposta:\n"); // Imprime a matriz transposta m x n 
    for (j = 0; j < m; j++) {       
        for (i = 0; i < n; i++) { 
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    // Indica ao usuário que foi finalizado perfeitamente
    printf("\nO programa foi encerrado com sucesso.\n");   
}
    

