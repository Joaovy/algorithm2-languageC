#include <stdio.h>
#include <string.h>


int main(void) {

   int array[5];

    for (int i = 0; i < 5; i++) {
        printf("informe o valor da posição[%d]: ", i + 1);
        scanf("%d", &array[i]);
    }

    int *pArray = &array[0];

    for (int i = 0; i < 5; i++) {

        if ((*pArray + i) % 2 == 0) {
            printf("Na posição[%d] contem o valor par: %d, Com o endereço: %p \n", i + 1, *(pArray + i), (void*)(pArray + i));
        }

    }

    return 0;
}
