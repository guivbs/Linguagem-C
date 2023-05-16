/******************************************************************************
algoritmo para obter dois vetores V1 e V2 de 10 números inteiros cada, calcular 
e apresentar a quantidade de vezes que esses vetores possuem números iguais 
nas mesmas posições. 
*******************************************************************************/

#include <stdio.h>

int main()
{
    // Seção de declaração de variáveis
    int i; // var para laço i de vetores
    int eleiguais = 0; // Var para armazenar o total de elementos iguais
    int V1[20]; // vetor para receber valores
    int V2[20]; // vetor para receber valores
    
    // Seção de comandos
    
    // Entrada de dados
 
    // Preenchendo os vetores V1 e V2 com valores fornecidos pelo usuário
    for (i = 0; i < 10; i++){ // Laço repete n vezes 
        
        // Valores para o vetor a 
        printf("Digite o %dº valor de V1: ", i+1);
        scanf("%d", &V1[i]);
        
        // Valores para o vetor b
        printf("Digite o %dº valor de V2: ", i+1);
        scanf("%d", &V2[i]);
        
    }
    
    // Processamento: calculando o vetor c com a soma dos valores de a + b
    for (i = 0; i < 10; i++){
        
        if (V1[i] == V2[i]){
            
            eleiguais++;
        }
        
    }
    
    // Saída de dados com formatação 
    
    printf("\nVetor A: ");   
    
    for (i = 0; i < 10; i++){
        
        printf("%d ", V1[i]);    
    }
    
    printf("\nVetor B: ");
    
    for (i = 0; i < 10; i++){
        
        printf("%d ", V2[i]); 
    }
    
    printf("\nA quantidade de números iguais mesmas posições é %d ", eleiguais);
    
    printf("\nO programa foi encerrado com sucesso.\n");    // Indica ao usuário que foi finalizado perfeitamente
}





