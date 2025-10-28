#include <stdio.h>

int main(void) {

    int anos, meses, dias;
    printf("informe sua idade (anos, meses e dias): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    int totalDias = anos * 365 + meses * 30 + dias;
    printf("Total de dias: %d \n", totalDias);

    return 0;
}