#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pilha {

    char dado;
    struct Pilha* prox;

} Pilha;

Pilha* empilhar(Pilha* topo, char valor) {
    Pilha* novo = (Pilha*)malloc(sizeof(Pilha));

    novo -> dado = valor;
    novo -> prox = topo;

    return novo;
}

Pilha* desempilhar(Pilha* topo, char* valor) {
    
    if(!topo)
        return NULL;
    
    Pilha* temp = topo;
    *valor = topo -> dado;
    topo = topo -> prox;
    return topo;

}

Pilha* inverterPilha(char palavra[]) {

    Pilha* pilha = NULL;

    for (int i = 0; palavra[i] != '\0'; i++) {
        pilha = empilhar(pilha, palavra[i]);

    }

    printf("Palavra invertida: %c", c);

    while(pilha) {
        pilha = desempilhar(pilha, &c);
        printf("%c", c);
    }

}


int main() {

    Pilha* pilha = NULL;

    char palavra[100];

    printf("Digite uma palavra");
    scanf("%s", palavra);

    

    

    return 0;

}