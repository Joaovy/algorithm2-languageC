#include <stdio.h>
#include <string.h>


int main(void) {

   int a, b;
   int *pA = &a;
   int *pB = &b;

    if (pA > pB) {
        printf("A - tem o maior endereço: %p", (void*)pA);

    } else if (pB > pA) {
        printf("B - Tem o maior endereço: %p", (void*)pB);
    } else {
        printf("Mesmo valor");
    }





    return 0;
}



