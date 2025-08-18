#include <stdio.h>

typedef struct {

    int dia;
    char mes[15];
    int ano;

} Data;


typedef struct {

    char nome[20];
    int idade;
    float salario;
    Data dataAniversario;

} Func;

Func chefe[3];

int main() {


    for (int i = 0; i < 3; i++) {

        printf("Digite seu nome: \n");
        scanf("%s", chefe[i].nome);
        printf("Digite sua idade: \n");
        scanf("%d", &chefe[i].idade);
        printf("Digite seu salario: \n");
        scanf("%f", &chefe[i].salario);
        printf("Digite seu dia de nascimento: \n");
        scanf("%d", &chefe[i].dataAniversario.dia);
        printf("Digite seu mes de nascimento: \n");
        scanf("%s", chefe[i].dataAniversario.mes);
        printf("Digite seu ano de nascimento: \n");
        scanf("%d", &chefe[i].dataAniversario.ano);

    }


    for (int i = 0; i < 3; i++) {

        printf("O nome do funcionario %d e: %s\n", i, chefe[i].nome);
        printf("A idade do funcionario %d e: %d\n", i, chefe[i].idade);
        printf("O salario do funcionario %d e: %.2f\n", i, chefe[i].salario);
        printf("O funcionario %d nasceu dia %d de %s de %d\n", i, chefe[i].dataAniversario.dia, chefe[i].dataAniversario.mes, chefe[i].dataAniversario.ano);
    
    }

    return 0;

}