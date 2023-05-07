/*algoritmo para calcular o resultado de uma divisão representada por uma fração. 
Solicitar ao usuário o numerador (termo superior da fração) e o denominador (termo inferior da fração) e, 
se o denominador for igual a zero,mostrar a mensagem “Erro: divisão por zero” e solicitar novamente somente o denominador. 
A divisão somente será realizada quando o usuário entrar com um denominador diferente de zero.*/

#include <stdio.h>

int main()
{   
    // Seção de declaração de variáveis
    float numerador;    // var para o numerador da fração
    float denominador;  // var para o denominador da fração
    float divisao;  // var para realzar a divisão da fração
    char resp; // var para perguntar se o usuário deseja continuar
    
    // Seção de comandos
    
    do {    // Enquanto a resposta for igual a sim (s)
        
        // Data input
        printf("Digite um numerador para fração: ");
        scanf("%f", &numerador);
        printf("Digite um denominador para fração: ");
        scanf("%f", &denominador);
        
        if (denominador == 0){  // Verifica a entrada de denominador
            
            do {    // repete até o usuário digitar um número diferente 0 
                
                // Se o denominador for igual 0 
                printf("Erro: divisão por zero.\n");
                
                // Pede novamente o denominador
                printf("Por favor, insira um denominador diferente de zero para a fração: ");
                scanf("%f", &denominador);
                
            } while (denominador == 0);
        } 
        
        // realiza a divisão da fração
        divisao = numerador / denominador;
        
        // Data output formatada 
        printf("Fração %.f/%.f, resultado igual a %.2f\n", numerador, denominador, divisao);
        
        
        // Pergunta ao usuário se deseja repetir
        printf("Deseja continuar (S/N): \n");
        scanf(" %c", &resp);
        
    } while (resp == 's' || resp == 'S');
    
    printf("O programa foi encerrado com sucesso.\n");    // Indica ao usuário que foi finalizado perfeitamente 
    
    return 0;
}