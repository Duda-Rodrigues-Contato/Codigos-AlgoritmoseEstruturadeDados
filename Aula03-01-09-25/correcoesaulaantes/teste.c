#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No* prox;
} No;

// Inserir no início da lista
No* inserirInicio(No* lista, int valor) {
    No* novo = (No*)malloc(sizeof(No)); // No* novo = (No*)malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = lista;
    return novo;
}

// Inserir no final da lista
No* inserirFim(No* lista, int valor) {
    No* novo = (No*)malloc(sizeof(No)); // No* novo = (No*)malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = NULL;
    if (!lista) 
        return novo;
    
    No* temp = lista;
    while (temp->prox) 
        temp = temp->prox;
    temp->prox = novo;
    return lista;
    
}

No* inserirOrdenado(No* lista, int valor) {
    No* temp = lista;
    No* novo = (No*)malloc(sizeof(No));
    novo -> dado = valor;
    novo -> prox = lista;

    while(temp->prox != NULL && temp -> prox < lista) {
        temp = temp->prox;
        novo -> prox = temp -> prox;
        temp -> prox = novo;
    }

    return lista;
}

// Imprimir a lista
void imprimirLista(No* lista) {
    No* temp = lista;
    while (temp) {
        printf("%d -> ", temp->dado);
        temp = temp->prox;
    }

    printf("NULL \n");

}

int main() {
    No* lista = NULL;
    lista = inserirInicio(lista, 10);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 30);
    lista = inserirFim(lista, 40);
    lista = inserirFim(lista, 50);
    lista = inserirOrdenado(lista, 5);
    //lista = inserirInicio(lista, 60);
    imprimirLista(lista);
    
    return 0;
    system("PAUSE");
}
