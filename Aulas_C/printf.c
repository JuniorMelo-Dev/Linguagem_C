#include <stdio.h>

int main() {
    // printf("%tipo_de_saída", valor_a_ser_impresso);
    // printf("%tipo1 %tipo2", var1, var2);


    /* TIPOS  
        integer %i ou %d
        float / double %f
        char %c
        string %s

        %u módulo de número
        %p endereço de memória
        %e ou %E notação científica
        %% imprimir somente sinal de porcentagem
    */

    int num = 10;
    printf( "%i\n", num );

    float f = 2.2;
    printf( "%f\n", f);

    printf( " %i - %f \n", num, f );

   return 0;
}