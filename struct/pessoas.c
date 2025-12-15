#include <stdio.h>
#include <string.h>
struct Endereco{
    char rua[50];
    int numero;
    char bairro[50];
    char cidade[50];
};
struct Data{
    int dia;
    int mes;
    int ano;
};

struct Pessoa{
    char nome[30];
    struct Endereco endereco;
    struct Data data;
    int cpf;
    float salario;
};

int main(void) {

    struct Pessoa pessoa[3];
    float media = 0;

    for(int i = 0; i < 3; i++){
        fflush(stdin);
        printf("nome da %d: ", i + 1);
        fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin);


        printf("informe endereço.\n");
        printf("rua: ");
        fgets(pessoa[i].endereco.rua, sizeof(pessoa[i].endereco.rua), stdin);


        printf("numero: ");
        scanf("%d", &pessoa[i].endereco.numero);
        getchar();


        printf("bairro: ");
        fgets(pessoa[i].endereco.bairro, sizeof(pessoa[i].endereco.bairro), stdin);


        printf("cidade: ");
        fgets(pessoa[i].endereco.cidade, sizeof(pessoa[i].endereco.cidade), stdin);


        printf("informe a data de nascimenro: ");
        scanf("%d %d %d", &pessoa[i].data.dia, &pessoa[i].data.mes, &pessoa[i].data.ano);


        printf("cpf: ");
        scanf("%d", &pessoa[i].cpf);


        printf("salario: ");
        scanf("%f", &pessoa[i].salario);
        getchar();

        float media;
        media += pessoa[i].salario;
    }

    float mediaTotal = media / 3;

    printf("\nMedia salarial: %.2f\n", mediaTotal);

    printf("\nPessoas que contém salario maior que R$3000");
    for(int i = 0; i < 3; i++){
        if (pessoa[i].salario >= 3000 ) {
            printf("\nA pessoa: %s no endereço, Rua: %s,Numero: %d, bairro %s, cidade; %s\n",
                pessoa[i].nome,
                pessoa[i].endereco.rua,
                pessoa[i].endereco.numero,
                pessoa[i].endereco.bairro,
                pessoa[i].endereco.cidade);
            printf("Data de Nascimento: %d/%d/%d\n",
                pessoa[i].data.dia,
                pessoa[i].data.mes,
                pessoa[i].data.ano);
            printf("CPF: %d, Salario: %.2f\n", pessoa[i].cpf, pessoa[i].salario);
        }
    }

    printf("Pessoas que contém salario maior que R$2000");
    for(int i = 0; i < 3; i++){
        if (pessoa[i].salario <= 2000 ) {
            printf("\nA pessoa: %s no endereço, Rua: %s,Numero: %d, bairro %s, cidade; %s\n",
                pessoa[i].nome,
                pessoa[i].endereco.rua,
                pessoa[i].endereco.numero,
                pessoa[i].endereco.bairro,
                pessoa[i].endereco.cidade);
            printf("Data de Nascimento: %d/%d/%d\n",
                pessoa[i].data.dia,
                pessoa[i].data.mes,
                pessoa[i].data.ano);
            printf("CPF: %d, Salario: %.2f\n", pessoa[i].cpf, pessoa[i].salario);
        }
    }



    return 0;
}



