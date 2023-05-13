/******************************************************************************

algoritmo para obter dois conjuntos (vetores), a e b, ambos de tamanho n e calcular 
o conjunto (vetor) c, sendo que cada elemento de c é resultado da soma dos 
elementos correspondentes de a e b, isto é, ci = ai + bi, para i = 1, 2, ..., n. 
Apresentar no final os conjuntos a, b e c.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // Seção de declaração de variáveis
    int n,    // var para usuário informar quantos elementos vai ter vetor a e b
        i;    // var para laço i repete até ser maior que var n 
    float a[100], b[100]; // vetores para receberem n valores
    float c[100]; // vetor para somar os n valores dos vetores a e b
    
    // Seção de comandos
    
    // Entrada de dados
    printf("Digite quantos elementos (inteiros) vai ter os vetores a e b: ");
    scanf("%d", &n);
 
    // Preenchendo os vetores a e b com valores fornecidos pelo usuário
    for (i = 0; i < n; i++){ // Laço repete n vezes 
        
        // Valores para o vetor a 
        printf("Digite o %dº valor de a: ", i+1);
        scanf("%f", &a[i]);
        
        // Valores para o vetor b
        printf("Digite o %dº valor de b: ", i+1);
        scanf("%f", &b[i]);
        
    }
    
    // Processamento: calculando o vetor c com a soma dos valores de a + b
    for (i = 0; i < n; i++){
        
        c[i] = a[i] + b[i]; // Adiciona as somas no vetor C
        
    }
    
    // Saída de dados com formatação 
    
    printf("\nVetor A: ");   
    
    for (i = 0; i < n; i++){
        
        printf("%.2f ", a[i]);    
    }
    
    printf("\nVetor B: ");
    
    for (i = 0; i < n; i++){
        
        printf("%.2f ", b[i]); 
    }

    printf("\nVetor C: ");
    
    for (i = 0; i < n; i++){
        
        printf("%.2f ", c[i]);
    }
    
    printf("\nO programa foi encerrado com sucesso.\n");    // Indica ao usuário que foi finalizado perfeitamente
}
