#include <stdio.h>

int main(void) {

    int pesoLab = 2;
    int pesoAvSeme = 3;
    int pesoExFinal = 5;

    float nota1, nota2, nota3;

    printf("informe suas 3 notas:\n");
    printf("Trabalho laboratorio: ");
    scanf("%f", &nota1);

    printf("Avaliação semestral: ");
    scanf("%f", &nota2);

    printf("Exame final: ");
    scanf("%f", &nota3);

    float resultadoFinal = (nota1 * pesoLab + nota2 * pesoAvSeme + nota3 * pesoExFinal) / (pesoLab + pesoAvSeme + pesoExFinal);

    if (resultadoFinal <= 10.0 && resultadoFinal >= 8.0) {
        printf("Sua media POnderada é: %.2f", resultadoFinal);
        printf(" Conceito: A");

    } else if (resultadoFinal <= 8.0 && resultadoFinal >= 7.1) {
        printf("Sua media POnderada é: %.2f", resultadoFinal);
        printf(" Conceito: B");

    } else if (resultadoFinal <= 7.0 && resultadoFinal >= 6.1) {
        printf("Sua media POnderada é: %.2f", resultadoFinal);
        printf(" Conceito: C");

    } else if (resultadoFinal <= 6.0 && resultadoFinal >= 5.1) {
        printf("Sua media POnderada é: %.2f", resultadoFinal);
        printf(" Conceito: D");

    } else {
        printf("Sua media POnderada é: %.2f", resultadoFinal);
        printf(" Conceito: E");

    }

    return 0;
}