#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


formaTime (int horas, int minutos, int segundos) {

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    


}


int main(){

    int data, mes, ano;
    scanf("%d %d %d", &data, &mes ,&ano);

    dataValidate(data, mes, ano);

    return 0;
}


