/******************************************************************************
Ex 03 - Dada uma matriz quadrada de ordem 3 de números inteiros positivos 
distintos, elabore um algoritmo para determinar o valor do elemento aij da matriz. 
O número da linha e da coluna do elemento devem ser informados pelo usuário
*******************************************************************************/
#include <stdio.h>

int main()
{
    // Var declaration
    int n[3][3]; // Matriz de ordem 3
    int bl,      // Linha que o usuário quer buscar
        bc;      // Coluna que usuário quer buscar
    int numbus;  // Número buscado 
    int i, j;   // Var para repetição (contadores)
    
    // Seção de comandos
    
    // Entrada de dados: Elementos para matriz
    for(i = 0; i < 3; i++){ // matriz com 3 colunas
       
        for(j = 0; j < 3; j++){ // matriz com 3 colunas
            
            // Adicionando elementos a matriz n 
            printf("Digite números positivos para matriz, Linha[%d] Coluna[%d]: ", i, j);
            scanf("%d", &n[i][j]);
        }
    }
    
    // Entrada de dados: Pergunta ao usuário qual o elemento deseja buscar 
    do {
        
        printf("Em qual linha deseja buscar ? ");
        scanf("%d", &bl);
        printf("Em qual coluna deseja buscar ? ");
        scanf("%d", &bc);
        
        // Validação dos valores informados pelo usuário
        if (bl < 0 || bl >= 3 || bc < 0 || bc >= 3) {
            
            printf("Valores de linha e/ou coluna inválidos.\n");
        }
        
    } while (bl < 0 || bl >= 3 || bc < 0 || bc >= 3);
    
    // Processamento: Buscar o elemento na matriz 
    numbus = 0; // Inicia a var com 0 para evitar problemas 
    
    for(int i = bl; i <= bl; i++){ // Vai direto para linha desejada
       
        for(int j = bc; j <= bc; j++){ // Vai direto para coluna desejada
            
            numbus = n[i][j]; // Recebe o número buscado
        }
    }
    
    // Saída de dados
    printf("\nMatriz de ordem 3\n");
   
    for(i = 0; i < 3; i++){ 
       
        for(j = 0; j < 3; j++){ 
            
            // Imprime a matriz formatada 
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    
    // Mostra o número buscado
    printf("Para a matriz N, o elemento N[%d][%d] é %d ", bl, bc, numbus);
    
    // Indica o final do progama
    printf("\nPrograma encerrado com sucesso.");
    
    return 0;
}



