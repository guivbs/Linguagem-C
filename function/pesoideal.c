/******************************************************************************
Ex 03 - Achar o peso ideal
Peso ideal para homens = (72.7 * h) - 58 
Peso ideal para mulheres = (62.1 * h) - 44.7 
*******************************************************************************/
#include <stdio.h>

float calculate_weight(float h, char gender) {
    float calculate; 

    if(gender == 'm' || gender == 'M'){
        calculate = (72.7 * h) - 58;
    }
    else if (gender == 'f' || gender == 'F'){
        calculate = (62.1 * h) - 44.7;
    }
    return calculate;
}

int main (){

    float h;    
    char gender;
    float ideal_weight;

    // Data input

    printf("Enter your height (meters): ");
    scanf("%f", &h);
    
    printf("Enter your gender(M or F): ");
    scanf(" %c", &gender);

    // Verificação de entrada inválida
    while (gender != 'm' && gender != 'f') {
        printf("Invalid gender. Please enter M or F: ");
        scanf(" %c", &gender);
    }
    
    // Process
    ideal_weight = calculate_weight(h, gender);
    
    // Data ouput 
    printf("Your ideal weight is %.2f kg\n", ideal_weight);
    return 0;
}