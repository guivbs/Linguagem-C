#include <stdio.h>

int main()
{
    char cargo;
    float salario, bonus;
    
    printf("Coloque seu tipo cargo A ou B: ");
    scanf(" %c", &cargo); // Corrigido para remover problema de buffer de entrada
    
    printf("Digite seu Salario: ");
    scanf("%f", &salario);
    
    if (cargo == 'A' || cargo == 'a') {
        if (salario <= 1000) {
            bonus = 500;
        } else if (salario <= 2500) {
            bonus = 250;
        } else if (salario <= 5000) {
            bonus = 100;
        } else {
            bonus = 50;
        }
    } else if (cargo == 'B' || cargo == 'b') {
        if (salario <= 2000) {
            bonus = 500;
        } else if (salario <= 5000) {
            bonus = 200;
        } else {
            bonus = 100;
        }
    } else {
        printf("Tipo de cargo inválido!\n");
        return 1; // Retorna 1 para indicar que houve um erro
    }
    
    printf("Para um salário de R$ %.2f e tipo de cargo %c, o valor do bônus é de R$ %.2f\n", salario, cargo, bonus);
    
    return 0;
}