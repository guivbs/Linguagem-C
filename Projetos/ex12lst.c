/* Escreva um algoritmo para armazenar uma lista de 10 nomes de pessoas e depois solicitar um novo nome
   e verificar se este consta na lista. Apresentar uma mensagem se o novo nome estiver na lista e outra
   mensagem caso contrário. */

#include <stdio.h>
#include <string.h>

int main() {   
    
    // Seção de declaração de variáveis
    char lista[10][16]; // Matriz para armazenar os nomes da lista, cada nome tem tamanho máximo de 15 caracteres (16 incluindo o caractere nulo)
    char nome[16]; // Variável para armazenar o nome a ser verificado
    int procura; // Variável para controlar a busca na lista
    int saida; // Variável para controlar a saída do programa

    // Seção de comandos
    
    // Entrada de dados: Nomes para lista
    for (int i = 0; i < 10; i++) { // Preenche a lista com os nomes fornecidos pelo usuário
        printf("Digite o nome número %d: ", i + 1);
        scanf("%s", lista[i]);
    }

    do {
        // Inicializa a variável com valor nulo
        saida = 0; 
        procura = 0;
        
        // Processo 1: Solicita o nome que será verificado
        printf("Digite o nome que será verificado na lista ('x' para sair): ");
        scanf("%s", nome);

        saida = strcmp(nome, "x"); // Verifica se o usuário digitou 'x' para sair do programa
        if (saida != 0) {
            
            // Processo 2: Procura o nome digitado na lista 
            int i = 0;
            do {
                procura = strcmp(nome, lista[i]); // Compara o nome fornecido com cada nome na lista
                i++;
            } while (i < 10 && procura != 0);

            // Saída de dados: Informa se consta ou não na lista de nomes fornecidos
            if (procura == 0) { 
                printf("Sim, o nome %s consta na lista na posição %d.\n", nome, i);
            } else {
                printf("Não, o nome %s não consta na lista.\n", nome);
            }
        }
    } while (saida != 0);

    // Indica o fim do programa
    printf("\nA verificação foi encerrada.");

    return 0;
}
