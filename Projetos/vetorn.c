// Ex 01 da lista de vetor

#include <stdio.h>

int main()
{   
    // Seção de declaração de variáveis
    int elemento[10];
    int novo;
    int pos;
    int i;
    
    // Seção de comandos
    
    // Entrada de dados para um vetor[10]
    for (int i = 0; i <= 9; i++) {
        
        printf("Digite o elemento (inteiro e positivo) %d: ", i + 1);
        scanf("%d", &elemento[i]);
    }
    
    // Entrada de dados para verificar se o elemento novo pertence ao conjunto
    do {    // Repete n vezes até a entrada de um número negativo (sentinela)
        
        printf("Digite o elemento que será verificado no conjunto: ");
        scanf("%d", &novo);
        
        // Processamento para verificar se pertence ao vetor
        
        pos = 0; i = 0;
        
        if (novo >= 0){
            
            do { // Repete até achar ou não o elemento novo no vetor
                
                if (novo == elemento[i]){
                    pos = i + 1;    // Guarda a posição do novo no vetor 
                }
                
                i++;
                
            } while (i <= 9 && pos == 0); 
            
            // Saída de dados com formatação 
            if (pos != 0){      // Se pertencer ao vetor
                
                printf("Sim, o elemento %d pertence ao conjunto na posição %d.\n", novo, pos);
            } 
            else {          // Se não pertencer ao vetor
                
                printf("Não, o elemento %d não pertence ao conjunto.\n", novo);
            }
        }
        
    } while (novo >= 0); 
    
    printf("\nO programa foi encerrado com sucesso.\n");    // Indica ao usuário que foi finalizado perfeitamente
    
}