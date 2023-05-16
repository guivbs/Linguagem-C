/******************************************************************************
Ex 07 - Dado o conjunto da temperatura média de cada um dos dias do mês 
(para um mês de trinta dias), faça um algoritmo para calcular:
A menor temperatura do mês; A maior temp do mês; A temperatura média mensal; 
O número de dias no mês em que a temperatura foi inferior à média mensal.
*******************************************************************************/

#include <stdio.h>

int main()
{
    // Seção de declaração de variáveis
    int i;    // var para laço i repete até ser maior que var 30
    float menor_temp,     // Var para menor temperatura
          maior_temp;     // Var para maior temperatura
    float media_temp = 0;     // Var para temperatura média
    int dias_media = 0;   // Var  ara mostrar quantos dias teve a temperatura média
    float month[40]; // vetor para receberem 30 dias
    
    // Seção de comandos
    
    // Entrada de dados: Preenchendo o vetor month
    for (i = 0; i < 30; i++){ // Laço repete n vezes 
        
        // Valores para o vetor month
        printf("Digite a temperatura (celsius) do %dº dia: ", i+1);
        scanf("%f", &month[i]);
        
        media_temp += month[i];
    }
    
    // Calcula a temperatura média de um mês (30 dias)
    media_temp = media_temp / 30;
    
    // Processamento: Verificar a maior, a menor e média temperatura
    maior_temp = 0; menor_temp = 50; // Valores pré-definidos para serem alterados
    
    for (i = 0; i < 30; i++){
        
        if (month[i] > maior_temp){   // Recebe a maior temperatura
            maior_temp = month[i];
        }
        else if (month[i] < menor_temp){    // Recebe a menor temperatura
            menor_temp = month[i];
        }
        
        // Verifica quantos dias tiveram temperatura abaixo da média
        if (month[i] < media_temp){ 
            dias_media++;
        }
    } 
    
    // Saída de dados com formatação 
    
    printf("\nTemperaturas do dia 1 a 15: ");   
    
    for (i = 0; i < 15; i++){
        
        printf("%.1f ", month[i]);    
    }
    
    printf("\nTemperaturas do dia 16 a 30: "); 
    
    for (i = 15; i < 30; i++){
        
        printf("%.1f ", month[i]);    
    }
    
    printf("\n%.1f foi a menor temperatura do mês.\n", menor_temp);
    printf("%.1f foi a maior temperatura do mês.\n", maior_temp);
    printf("%.1f foi a temperatura média mensal. \n", media_temp);
    printf("A temperatura foi inferior à média mensal em %d \n", dias_media);
    printf("\nO programa foi encerrado com sucesso.\n");    // Indica ao usuário que foi finalizado perfeitamente
}

