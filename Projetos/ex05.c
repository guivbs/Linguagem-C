// Ex 05 - Verificar se a matriz é nula ou não

#include <stdio.h>

int main()
{
    // Var declaration
    int m[20][20]; // Matriz de ordem l x k 
    int k; // Tamanho da matriz
    int nula; // Confere os elementos 
    
    // Seção de comandos
    
    // Entrada de dados para informar o tamanho da matriz
    printf("Informe o tamanho de k (Matriz): ");
    scanf("%d", &k);
    
    // Entrada de dados: Elementos a matriz
    nula = 0; // Zera a Var
    
    for(int i = 0; i < k; i++){ // matriz com k linhas
       
        for(int j = 0; j < k; j++){ // matriz com k colunas
            
            // Adicionando elementos a matriz n 
            printf("Digite elementos para matriz, Linha[%d] Coluna[%d]: ", i, j);
            scanf("%d", &m[i][j]);
            
            nula += m[i][j]; // Adiciona todos os valores da matriz 
            
        }
    }
    
    // Saída de dados
    
    if (nula == 0){
        
        printf("Matriz de ordem %d, é nula.", k);
    }
    else {
        
        printf("\nMatriz de ordem %d, não é nula.\n", k);
        
        for(int i = 0; i < k; i++){ // matriz com l linhas
           
            for(int j = 0; j < k; j++){ // matriz com k colunas
                
                // Imprime a matriz formatada 
                printf("%d ", m[i][j]);
                
            }
            printf("\n");
        }
    }
    
    // Indica o final do progama
    printf("\nPrograma encerrado com sucesso.");
    
    return 0;
}


