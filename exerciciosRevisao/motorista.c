#include <stdio.h>

int main(void) {

    float precoGasolina, valorPago;
    printf("informe o valor da gasolina: ");
    scanf("%f", &precoGasolina);

    printf("informe o valor a ser pago: ");
    scanf("%f", &valorPago);

    float litroGasilina = valorPago / precoGasolina;
    printf("Quantidade de litros: %.2f \n", litroGasilina);

    return 0;
}