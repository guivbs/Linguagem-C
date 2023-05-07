#include <stdio.h>
#include <string.h>

int main()
{
    char nome[120],nomes[150];
    char sexo;
    int x;
    int qthomem, qtmulher;
    
    for (x = 1; x <= 10; x++){
        
        printf("Informe seu nome: ");
        scanf("%s", nome);
        strcpy(nomes,nome);
       
        printf("Informe seu sexo (M/F): ");
        scanf(" %c", &sexo);
        
        if (sexo == 'm' || sexo == 'M'){
            printf("Sr.%s\n", nomes);
            qthomem++;
        } 
        else {
            printf("Sra.%s\n", nomes);
            qtmulher++;  
        }
    }

    printf("Quantidade de pessoas do sexo masculino: %d\n", qthomem);
    printf("Quantidade de pessoas do sexo feminino: %d\n", qtmulher);
    
    
    return 0;
}