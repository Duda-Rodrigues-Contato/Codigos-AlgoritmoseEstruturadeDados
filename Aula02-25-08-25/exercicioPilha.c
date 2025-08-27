// Inverter uma Palavra com Pilha
// Crie um programa que receba uma palavra e a inverta utilizando uma pilha.

// Entrada Exemplo: CADERNO
// Saída: ONREDAC

#include <stdio.h>
#include <string.h>

typedef struct No {
    char dado;
    struct No* prox;
} No;


No* push(No * topo, char valor) {

    No* novo = (No*)malloc(sizeof(No));

    novo -> dado = valor;
    novo -> prox = topo;

    return novo;

}


No* pop(No* topo) {
    if (topo == NULL) 
        return NULL;

    No* temp = topo;
    topo = topo -> prox;
    
    free(temp);

    return topo;
}


int main() {

    No* lista;
    char palavra[20];
    //int palavraCont;

    printf("Digite a palavra: \n");
    scanf("%s", &palavra);

    //palavraCont = strlen(palavra);

    //for (int i = 0; i <= palavraCont; i++) {

    //}
    push(lista, palavra);
    pop(lista);

    printf("Palavra normal = %s", palavra);
    printf("Palavra invertida = %s", pop(lista));
    return 0;

}