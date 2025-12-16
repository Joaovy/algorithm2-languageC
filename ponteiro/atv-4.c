#include <stdio.h>
#include <string.h>


int main(void) {

   int  array[10];
   int *pArray = array;

   // Inicializa o array com valores conhecidos
   for (int i = 0; i < 10; i++) {
       array[i] = i + 1;
   }

    for (int i = 0; i < 10; i++) {
        printf("Endereco do elemento %d: %p | Valor: %d\n", i, (void*)(pArray + i), *(pArray + i));
    }

    return 0;
}
