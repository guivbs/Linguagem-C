/*A prefeitura de uma cidade deseja fazer uma pesquisa sobre a sua população economicamente ativa. Faça
um algoritmo para coletar dados sobre salário e número de filhos de cada habitante e apresentar ao final
da entrada dos dados:*/
#include <stdio.h>
#include <math.h>

int main()
{
    char resp;
    float salario;
    float media_salario = 0;
    float maior_salario = -1;
    float media_filhos = 0;
    int filhos;
    int habitantes = 0;
    int normal = 0;
    
    do {    // Enquanto a resposta for igual a sim (s)
        
        // Data input
        printf("Digite seu salário: ");
        scanf("%f", &salario);
        printf("Digite seu número de filhos: ");
        scanf("%d", &filhos);
        
        media_salario += salario;
        
        media_filhos += filhos;
        
        if (salario > maior_salario){
            maior_salario = salario;
        }
        
        if(salario < 3300){
            normal++;
        }
        
        // Pergunta ao usuário se deseja repetir
        printf("Outro usuário (S/N)? \n");
        scanf(" %c", &resp);
        printf("\n");
        
        habitantes++;
        
    } while (resp == 's' || resp == 'S');
    
    media_salario = (media_salario / habitantes);
    
    media_filhos = ceil(media_filhos / habitantes);

    // Data output formatada 
    printf("Média do salário dos habitantes: %.2f\n", media_salario);
    printf("Média do número de filhos: %.f\n", media_filhos);
    printf("Maior salário dos habitantes: %.2f\n", maior_salario);
    printf("Quantidade com salário menor que R$ 3.300,00: %d\n", normal);

}