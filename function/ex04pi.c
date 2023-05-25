#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Declaração das funções
float area (float r){
    float A;

    A = PI * pow(r,2);
    return A;
}

float perimetro (float r){
    float P;

    P = 2 * PI * r;
    return P;
}

int main() {

    float r;
    float resultado;
    char a_p;

    // Data input
    printf("Digite um valor para o raio (r) de um círculo qualquer: ");
    scanf("%f", &r);
    
    printf("Deseja calcular a área (A) ou o perímetro (P): ");
    scanf(" %c", &a_p);

    // Chamada da função e armazenamento do resultado em uma variável
    if (a_p == 'a'){
        resultado = area(r);
    }
    else if (a_p ==  'p'){
        resultado = perimetro(r);
    }
    else {
        printf("Caractere inválido.");
        return 0;
    }
    
    // Data output
    printf("Para um círculo de raio igual a %.1f cm e a opção para calcular a área, o resultado é aproximadamente %.1f cm^2", r, resultado);
    return 0;
}