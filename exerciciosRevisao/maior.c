#include <stdio.h>

int main(void) {

    int maior;
    int vetor[6];
    for (int i = 0; i < 6; i++) {
        printf("informe os numeros do vetor(%d): ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (int i = 0; i < 6; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }

    }

    printf("maior numero é %d \n", maior);


    return 0;
}