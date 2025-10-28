#include <stdio.h>

int main(void) {

    int custoDeFabrica;
    printf("informe o custo de fabrica: ");
    scanf("%d", &custoDeFabrica);

    int distribuidor = custoDeFabrica * 0.28;
    int impostos = custoDeFabrica * 0.45;

    int custoDoConsumidor = custoDeFabrica + distribuidor + impostos;

    printf("custo total do cunsumidor: %d \n", custoDoConsumidor);


    return 0;
}