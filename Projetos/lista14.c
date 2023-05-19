/******************************************************************************

Elabore um algoritmo para calcular a matriz transposta de uma matriz n x m. 
Apresentar no final a matriz original e a matriz transposta.
matriz original = n linhas x m colunas
matriz transposta = m x n troca ordenada das linhas pelas colunas de uma matriz original

*******************************************************************************/

#include <stdio.h>

int main (){
    
    // Declaração de variáveis
    int n,  // Variável para tamanho da linha 
        m;  // Variável para tamanho da caluna
    int i, j; // Variáveis de controle (contadores)
    int v = 1; // Variável mostra quantos valores foram colocados
    int mo[100][100]; // Matriz de n x m elementos
    int mt[100][100];  // Matriz transposta m x n elementos
    
    // Seção de comandos
    
    // Entrada de dados para informar o tamanho da matriz
    printf("Informe o tamanho de n (Linha): ");
    scanf("%d", &n);
    
    printf("Informe o tamanho de m (Coluna): ");
    scanf("%d", &m);
    
    if (n > 0 && m > 0) {   // Verifica se o valor de n e m são positivos > 0 
        
        // Processamento: Entrada de valores para a matriz de n x m 
        for (i = 0; i < n; i++) { // Repete n vezes (linha)
            
            
            for (j = 0; j < m; j++) { // Repete m vezes (coluna)
                
                printf("Digite o %d valor (inteiro) para a matriz: ", v);
                scanf("%d", &mo[i][j]);
               
                mt[i][j] = mo[i][j];
                
                v++; // Mostra quantos valores já foram colocados
            }
        }
        
        // Saída de dados com formatação 
        
        printf("\nMatriz original:\n"); // Imprime a matriz original n x m
        
        for (i = 0; i < n; i++) { // Repete n vezes (linha)
            
            for (j = 0; j < m; j++) { // Repete m vezes (coluna)
                
                printf("%d ", mo[i][j]);
                
            }
            printf("\n");
        }
        
        printf("\nMatriz transposta:\n"); // Imprime a matriz transposta m x n 
        
        for (j = 0; j < m; j++) { // Repete m vezes (linha)
            
            for (i = 0; i < n; i++) { // Repete n vezes (coluna)
                
                printf("%d ", mt[i][j]);
                
            }
            printf("\n");
        }
        
        printf("\nO programa foi encerrado com sucesso.\n");    // Indica ao usuário que foi finalizado perfeitamente
        
    }
    else {
        
        // Indica ao usuário que o programa não foi executado
        printf("\nDigite valores positivos > 0 para n e m.\n");    
        printf("O programa não foi executado.\n");
    }
    
}
    

    


