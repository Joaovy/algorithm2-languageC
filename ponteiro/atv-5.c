#include <stdio.h>
#include <string.h>


int main(void) {

    int matrix[3][3];
    int *pMatriz = &matrix[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereço do elemento [%d][%d]: %p \n", i, j, (void*)(pMatriz + i * 3 +j));
        }
    }

    return 0;
}
