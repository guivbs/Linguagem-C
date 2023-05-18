/******************************************************************************
Ex 04 -matriz quadrada de ordem 4, elabore um algoritmo para calcular a soma 
de todos os :
a) Elementos da linha 3;
b) Elementos da coluna 2;
c) Elementos da diagonal principal;
d) Elementos da diagonal secundária
*******************************************************************************/

#include <stdio.h>

int main()
{
    // Var declaration
    int n[4][4]; // Matriz de ordem 4
    int linha3,  // Soma da linha 3
       coluna2,  // Soma da coluna 2
       diagpri,  // Soma da diagonal principal
       diagsec;  // Soma da diagonal secundária
    
    // Seção de comandos
    
    // Entrada de dados 
    for(int i = 0; i < 4; i++){ // matriz com 4 linhas
       
        for(int j = 0; j < 4; j++){ // matriz com 4 colunas
            
            // Adicionando elementos a matriz n 
            printf("Digite números positivos para matriz, Linha[%d] Coluna[%d]: ", i, j);
            scanf("%d", &n[i][j]);
        }
    }
    
    // Processo 1: Soma da linha 3
    for(int j = 0; j < 4; j++){ // (i == Linha 3)
        
        linha3 += n[2][j];
    }
    
    // Processo 2: Soma da coluna 2
    for(int i = 0; i < 4; i++){ 
       
        coluna2 += n[i][1];
    }
    
    // Processo 3: Soma da diagonal principal
    for(int i = 0; i < 4; i++){ 
       
        diagpri += n[i][i];
    } 
    
    // Processo 4: Soma da diagonal secundária
    for(int i = 0; i < 4; i++){ 
       
        diagsec += n[i][3 - i];
    } 
    
    // Saída de dados
    printf("\nMatriz de ordem 4\n");
    
    for(int i = 0; i < 4; i++){ // matriz com 4 colunas
       
        for(int j = 0; j < 4; j++){ // matriz com 4 colunas
            
            // Imprime a matriz formatada 
            printf("%d ", n[i][j]);
            
        }
        printf("\n");
    }
   
    //
    printf("A soma dos elementos da linha 3 é %d\n", linha3);
    
    //
    printf("A soma dos elementos da coluna 2 é %d\n", coluna2);
    
    //
    printf("A soma dos elementos da diagonal principal é %d\n", diagpri);
    
    //
    printf("A soma dos elementos da diagonal secundária é %d\n", diagsec);
    
    // Indica o final do progama
    printf("\nPrograma encerrado com sucesso.");
    
    return 0;
}


