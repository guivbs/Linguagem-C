/******************************************************************************
Ex 01 - Par ou impar
*******************************************************************************/
#include <stdio.h>

int even_odd (int n) {
    int num;

    if (n == 0) { // Zero
        num = 10;
    }
    else if (n % 2 == 0) { // Even
        num = 1;
    }
    else { // Odd
        num = 0;
    }
    return num;
}

int main() {
    
    int n;
    int result;

    printf("Enter a number to check whether it's even or odd: ");
    scanf("%d", &n);

    result = even_odd(n);

    if (result == 1) {
        printf("%d is EVEN (PAR)", n);
    }
    else if (result == 0) {
        printf("%d is ODD (IMPAR)", n);
    }
    else {
        printf("ZERO");
    }
    return 0;
}