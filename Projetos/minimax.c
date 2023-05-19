/* Ex 10 -Na teoria dos sistemas, o elemento minimax de uma matriz consiste no menor elemento de uma linha
onde se encontra o maior elemento da matriz */
#include <stdio.h>
#define MAX 20

int main()
{
    // Var declaration
    int m[MAX][MAX]; // Matriz de ordem n
    int n; // Ordem da matriz
    int mini; // Menor elemento da linha com maior elemento
    int max; // Maior elemento da matriz
    int imax, jmax; // Linha e coluna que se encontra o maior elemento
    int jmini; // Coluna que se encontra o menor elemento da linha do maior elemento

    // Seção de comandos
    
    // Entrada de dados

    // Ordem da matriz
    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);
    
    // Verifica se n não supera o valor max
    if(n > MAX){
        printf("A ordem da matriz deve ser menor que 50");
        return 0;
    }

    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){ 
            
            // Adicionando elementos a matriz m
            printf("Digite números positivos para matriz, Linha[%d] Coluna[%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    // Processamento: 
    
    // 1- Achar o maior elemento da matriz m

    max = 0; // Zera a var
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){ 
            if (m[i][j] > max){
                max = m[i][j];  // Recebe o maior elemento da matriz
                imax = i; // Linha do maior elemento
                jmax = j; // Coluna do maior elemento
            }
        }
    }
    
    // 2- Achar o menor elemento da matriz da matriz n
    
    mini = max; // Valor alto pré definido para pegar o menor elemento 
    for(int i = imax; i <= imax; i++){ 
        for(int j = 0; j < n; j++){ 
            if (m[i][j] < mini){
                mini = m[i][j];  // Recebe o menor elemento da linha
                jmini = j;
            }
        }
    }
    
    // Saída de dados
    
    // Matriz m
    printf("\nMatriz de ordem %d\n", n);    
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < n; j++){ 
            
            // Imprime a matriz formatada 
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    // Minimax da matriz
    printf("Minimax da matriz\n");
    printf("Menor elemento %d na posição [%d][%d]\n", mini, imax, jmini);
    printf("Maior elemento %d a posição [%d][%d]\n", max, imax, jmax);

    // Indica o final do progama
    printf("Programa encerrado com sucesso.");
    
    return 0;
}



