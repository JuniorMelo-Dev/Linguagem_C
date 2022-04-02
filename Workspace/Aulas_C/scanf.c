#include <stdlib.h>
#include <stdio.h>

int main() {

    /* 
        scanf("%tipo", &variável);
        scanf("%tipo1 %tipo2", &var1, &var2);
     */

    int num1;
    printf("Digite um valor: %i");
    scanf(" %i", &num1);

    printf("Você digitou --> %i", num1);

    return 0;
}