#include <stdio.h>
#include <math.h>

char solicitarCaractere() {
    char caractere;
    
    // Entrada de dados
    printf("Digite 'S' para Sim ou 'N' para Não: ");
    scanf(" %c", &caractere);
    
    while (caractere != 'S' && caractere != 'N') {
        printf("Entrada incorreta! Digite 'S' para Sim ou 'N' para Não: ");
        scanf(" %c", &caractere);
    }
    return caractere;
}

int main() {
    
    int numero;
    int cubo;
    char resposta;
    
    do {
        // Entrada de dados
        printf("Digite um número: ");
        scanf("%d", &numero);
        
        // Processo
        cubo = pow(numero,3);
        
        // Saida de dados
        printf("O cubo do número é %d\n", cubo);
        
        resposta = solicitarCaractere();
    } while (resposta != 'N');
    return 0;
}
