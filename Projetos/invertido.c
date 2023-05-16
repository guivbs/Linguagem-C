/******************************************************************************
Ex 04 - algoritmo para obter um conjunto de 10 elementos e apresentar os seus 
elementos na ordem inversa. 
*******************************************************************************/

#include <stdio.h>

int main()
{
    // Seção de declaração de variáveis
    int i;    // var para laço i repete até ser maior que var 10
    int normal[15]; // vetor para receberem 10 elementos
    int invertido[15]; // vetor para mostrar vetor normal invertido
    
    // Seção de comandos
 
    // Entrada de dados: Preenchendo o vetor normal
    for (i = 0; i < 10; i++){ // Laço repete n vezes 
        
        // Valores para o vetor normal 
        printf("Digite o %dº valor de a: ", i+1);
        scanf("%d", &normal[i]);
        
    }
    
    // Processamento: invertendo o vetor normal
    for (i = 9; i >= 0; i--){
        
        invertido[i] = normal[i];
        
    }
    
    // Saída de dados com formatação 
    
    printf("\nVetor normal: ");   
    
    for (i = 0; i < 10; i++){
        
        printf("%d ", normal[i]);    
    }
    
    printf("\nVetor invertido: ");
    
    for (i = 9; i >= 0; i--){
        
        printf("%d ", invertido[i]); 
    }
    
    printf("\nO programa foi encerrado com sucesso.\n");    // Indica ao usuário que foi finalizado perfeitamente
}

