#include <stdio.h>
#include <string.h>


int main(void) {

    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *pInteiro = &inteiro;
    float *pReal = &real;
    char *pCaractere = &caractere;

    printf("Valores iniciais: \n");
    printf("inteiro = %d\n", inteiro);
    printf("real = %f\n", real);
    printf("caractere = %c\n", caractere);

    *pInteiro = 20;
    *pReal = 6.80;
    *pCaractere = 'B';

    printf("Valores Modificados: \n");
    printf("inteiro = %d\n", inteiro);
    printf("real = %f\n", real);
    printf("caractere = %c\n", caractere);



    return 0;
}



