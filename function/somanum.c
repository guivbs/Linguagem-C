#include <stdio.h>

// Declaração da função
int somar(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main() {
    int num1 = 5;
    int num2 = 3;

    // Chamada da função e armazenamento do resultado em uma variável
    int resultado = somar(num1, num2);

    printf("A soma de %d e %d é %d\n", num1, num2, resultado);

    return 0;
}


