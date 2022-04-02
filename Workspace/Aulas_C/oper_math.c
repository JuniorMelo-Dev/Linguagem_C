#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf( "O resultado da Soma é: %i\n", soma ); 

    int sub = num2 - num1;
    printf( "O resultado da Subtração é: %i\n", sub);

    int multi = num1 * num2;
    printf( "O resultado da Multiplicação é: %i\n", multi);

    int div = num2 / 2;
    printf( "O resultado da Divisão é: %i", div);

    return 0;
}