#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

dataTrue(int d, int m, int a){

    if(m == 1 ){
        printf("%d de Janeiro de %d. ", d, a);

    } else if( m == 2){
        printf("%d de Fevereiro de %d. ", d, a);

    }else if( m == 3){
        printf("%d de março de %d. ", d, a);

    }else if( m == 4){
        printf("%d de abril de %d. ", d, a);

    }else if( m == 5){
        printf("%d de maio de %d. ", d, a);

    }else if( m == 6){
        printf("%d de junho de %d. ", d, a);

    }else if( m == 7){
        printf("%d de julho de %d. ", d, a);

    }else if( m == 8){
        printf("%d de agosto de %d. ", d, a);

    }else if( m == 9){
        printf("%d de setembro de %d. ", d, a);

    }else if( m == 10){
        printf("%d de outubro de %d. ", d, a);

    }else if( m == 11){
        printf("%d de novembro de %d. ", d, a);

    }else if( m == 12){
        printf("%d de dezembro de %d. ", d, a);
    }

}

dataValidate(int dataV, int mesV, int anoV){

    if(dataV > 31 || dataV < 0 || mesV > 12 || mesV < 0){
        printf("Data invalida\n");
    } else {
        printf("Data valida\n");

        dataTrue(dataV, mesV, anoV);
    }

}

int main(){

    int data, mes, ano;
    scanf("%d %d %d", &data, &mes ,&ano);

    dataValidate(data, mes, ano);

    return 0;
}


