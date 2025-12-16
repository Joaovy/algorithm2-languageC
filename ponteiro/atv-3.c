#include <stdio.h>
#include <string.h>


int main(void) {

   int a, b;


    printf("Informe o valor da primeira variavel(A): ");
    scanf("%d", &a);

    printf("Informe o valor da primeira variavel(B): ");
    scanf("%d", &b);

    int *pA = &a;
    int *pB = &b;

    if (pA > pB) {
        printf("a variavel A - tem o maior endereço: %p, com o seguinte valor: %d", (void*)pA), a;

    } else if (pB > pA) {
        printf("B - Tem o maior endereço: %p, com o seguinte valor: %d", (void*)pB, b);
    } else {
        printf("Mesmo valor");
    }





    return 0;
}



