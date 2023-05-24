/******************************************************************************
Ex 02 - converter temperatura F para C
*******************************************************************************/
#include <stdio.h>

float convert (float fahrenheit){
    // (°F − 32) × 5/9
    float celsius;

    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main () {

    float fahrenheit;
    float temperature;

    printf("What's the temperature in Fahrenheit? ");
    scanf("%f", &fahrenheit);

    temperature = convert(fahrenheit);

    printf("The temperature in Celsius is %.1f", temperature);
    return 0;
}