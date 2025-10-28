#include <stdio.h>

int main(void) {

    int vetor[10];
    for (int i = 0; i < 10; i++) {
        printf("informe a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] > 0) {
            printf("Posição %d contem o numero: %d\n", i,vetor[i]);
        }
    }



    return 0;
}