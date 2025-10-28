#include <stdio.h>

int main(void) {

    int totalDias;
    printf("informe sua idade (em dias): ");
    scanf("%d", &totalDias);

    int anos = totalDias / 365;;
    int resto = totalDias % 365;
    int meses = resto / 30;
    int dias = resto % 30;

    printf("%d anos, %d meses e %d dias", anos, meses, dias);



    return 0;
}