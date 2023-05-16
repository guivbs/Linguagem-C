/******************************************************************************
ex 09 - juntar 2 vetores em 1
*******************************************************************************/

#include <stdio.h>

int main()
{
    // Seção de declaração de variáveis
    int nu,     // var para armazenar quantos elementos tem vetor u
        nv,    // var para armazenar quantos elementos tem vetor v
        i;    // var para laço i repete até ser maior que var n 
    float u[50], v[50]; // vetores para receberem n valores [max 50]
    float x[100]; // vetor para receber os vetores u e v [max 100]
    
    // Seção de comandos
    
    // Entrada de dados
    printf("Digite quantos elementos (inteiros) vai ter os vetores u: ");
    scanf("%d", &nu);
    
    printf("Digite quantos elementos (inteiros) vai ter os vetores v: ");
    scanf("%d", &nv);
    
    // Preenchendo os vetores a e b com valores fornecidos pelo usuário
    for (i = 0; i < nu; i++){ // Laço repete n vezes 
        
        // Valores para o vetor u 
        printf("Digite o %dº valor de a: ", i+1);
        scanf("%f", &u[i]);
        
    }
    
    for (i = 0; i < nv; i++){ // Laço repete n vezes 
        
        // Valores para o vetor u
        printf("Digite o %dº valor de v: ", i+1);
        scanf("%f", &v[i]);
        
    }
    
    // Processamento: calculando o vetor x com os valores de u e v
    for (i = 0; i < nu; i++){
        
        x[i] = u[i]; // Adiciona o vetor u no vetor x
        
    }
    
    for(i = 0; i <= nv; i++){
        
        x[nu + i] = v[i]; // Adiciona o vetor v no vetor x
    }
    
    // Saída de dados com formatação 
    
    printf("\nVetor U: ");   
    
    for (i = 0; i < nu; i++){
        
        printf("%.1f ", u[i]);    
    }
    
    printf("\nVetor V: ");
    
    for (i = 0; i < nv; i++){
        
        printf("%.1f ", v[i]); 
    }

    printf("\nVetor X: ");
    
    int nx = nu + nv; // Var apenas para mostar o tamanho do vetor x 
    for (i = 0; i < nx; i++){
        
        printf("%.1f ", x[i]);
    }
    
    printf("\nO programa foi encerrado com sucesso.\n");    // Indica ao usuário que foi finalizado perfeitamente
}

