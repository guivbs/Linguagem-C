/* algoritmo para obter valores do usuário e exibir a quantidade de valores negativos
(menores que zero) e quantidade de valores iguais a zero que foram informados.*/

#include <stdio.h>

int main()
{
    // Seção de declaração de variáveis
    int n;          // Var para armazenar quantas vezes o laço vai ser executado
    int repeat;     // Var para repetir até o valor ser igual a var n
    float num;          // Var para armazenar o número digitado pelo usuário
    float negativos = 0; //  Var para contar quantos número negativos foram informados
    float zero = 0;   // Var para contar valores iguais a zero que foram informados
    
    // Seção de comandos
    
    // Data input 
    printf("Digite quantos valores deseja colocar: ");
    scanf("%d", &n);
    
    if (n > 0) {    // Verifica se o valor da repetição é maior que zero
        
        for (repeat = 1; repeat <= n; repeat++){    // Laço para receber valores
            
            printf("Digite o %d número: ", repeat);
            scanf("%f", &num);
            
            if (num < 0){       // Adiciona +1 a var negativos se a condinção for true
                negativos++;
            }
            
            if (num == 0){      // Adiciona +1 a var zero se a condinção for true
                zero++; 
            }
        }
        
        // Data output
        printf("Total de números negativos digitados %.f\n", negativos);
        printf("Quantidade de valores iguais a zero digitados %.f\n", zero);
        printf("Execução concluída com sucesso.\n"); // Indica ao usuário que tudo ocorreu perfeitamente
    } 
    else {
        // Mensagem de erro para o usuário para avisar que o algoritmo não funcionou
        printf ("O valor de repetição tem que ser um número inteiro positivo maior ou igual a 1.\n");
    }
    
    return 0;
}