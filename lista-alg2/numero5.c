#include <stdio.h>

int main(void) {

    int custoFrago;
    float umAnelChip, doisAneisAlimento;

    printf("Informe o valor do anel com 1 chip: ");
    scanf("%f", &umAnelChip);
    printf("\nInforme o valor com dos aneis (2 un): ");
    scanf("%f", &doisAneisAlimento);

    custoFrago = umAnelChip + (2 * doisAneisAlimento);
    int quantidadeFrago;

    printf("\nQuantiade de fragos na fabrica: ");
    scanf("%d", &quantidadeFrago);

    float custoTotal = custoFrago * quantidadeFrago;
    printf("O gasto total séra: %.2f", custoTotal);


    return 0;
}