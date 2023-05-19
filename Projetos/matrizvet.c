#include <stdio.h>

int main()
{
    // Var declaration
    int m[5][5]; // Matriz de ordem 5
    int linha_m[5], coluna_m[5];
    
    // Seção de comandos
    
    // Entrada de dados 
    for(int i = 0; i < 5; i++){ 
        for(int j = 0; j < 5; j++){ 
            
            // Adicionando elementos a matriz n 
            printf("Digite números positivos para matriz, Linha[%d] Coluna[%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    // Inicialização do vetor linha_m com zeros
    for (int i = 0; i < 5; i++) {
        linha_m[i] = 0;
    }
    
    for (int j = 0; j < 5; j++) {
        coluna_m[j] = 0;
    }
    
    // Processamento: vetores para calcular a soma das linhas
    for(int i = 0; i < 5; i++){ 
        for(int j = 0; j < 5; j++){ 
            linha_m[i] += m[i][j];
        }
    }
    
    for(int i = 0; i < 5; i++){ 
        for(int j = 0; j < 5; j++){ 
            coluna_m[j] += m[i][j];
        }
    }
    
    // Saída de dados
    printf("\nMatriz de ordem 5\n");
    for(int i = 0; i < 5; i++){ 
        for(int j = 0; j < 5; j++){ 
            // Imprime a matriz formatada 
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    printf("Vetor soma das linhas: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", linha_m[i]);
    }
    
    printf("\n");
    
    printf("Vetor soma das colunas: ");
    for (int j = 0; j < 5; j++){
        printf("%d ", coluna_m[j]);
    }
    
    // Indica o final do programa
    printf("\nPrograma encerrado com sucesso.");
    
    return 0;
}
