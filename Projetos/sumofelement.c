/******************************************************************************
Ex 02 - Elabore um algoritmo para calcular a soma de todos os elementos 
de uma matriz 2 x 3
*******************************************************************************/
#include <stdio.h>

int main()
{
    // Var declaration
    int n[2][3]; // Matriz de ordem 2 x 3
    int sn; // Var para somar a matriz n
    
    // Seção de comandos
    
    // Entrada de dados 
    for(int i = 0; i < 2; i++){ // matriz com 2 colunas 
       
        for(int j = 0; j < 3; j++){ // matriz com 3 linhas
            
            // Adicionando valores a matriz n 
            printf("Digite números positivos para matriz, Linha[%d] Coluna[%d]: ", i + 1, j + 1);
            scanf("%d", &n[i][j]);
        }
    }
    
    // Processamento: Soma dos elementos da matriz
    for(int i = 0; i < 2; i++){ // matriz com 2 colunas 
       
        for(int j = 0; j < 3; j++){ // matriz com 3 linhas
            
            // Adiciona e soma (+=) todos os valores a var sn
            sn += n[i][j]; 
        }
    }
    
    // Saída de dados
    
    printf("\nMatriz 2 x 3\n"); // Matriz n
    
    for(int i = 0; i < 2; i++){ // matriz com 2 colunas 
       
        for(int j = 0; j < 3; j++){ // matriz com 3 linhas 
            
            // Imprime a matriz formatada 
            printf("%d ", n[i][j]);
            
        }
        printf("\n");
    }
    
    // Mensagem que informa a soma dos elementos da matriz n
    printf("\nPara a matriz N, a soma de todos os elementos é %d\n", sn);
    
    // Mensagem que informa o fim do programa ao usuário
    printf("Programa encerrado com sucesso.");
    
    return 0;
}


