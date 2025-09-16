#include <stdio.h>
#include <stdlib.h>

typedef struct No {

    int valor;
    struct No* esquerda;
    struct No* direita;

} No;


// Criar novo nó:
No* novoNo(int valor) {

    No* no = (struct No*)malloc(sizeof(struct No));

    no -> valor = valor;
    no -> esquerda = no -> direita = NULL;

    return no;

}


// Inserir valor no nó:
struct No* inserir(struct No* raiz, int valor) {

    if (raiz == NULL) {
        return novoNo(valor);
    }

    if (valor < raiz -> valor) {
        raiz -> esquerda = inserir(raiz -> esquerda, valor);
    } else if (valor > raiz -> valor) {
        raiz -> direita = inserir(raiz -> direita, valor);
    }

    return raiz;

}


// Busca em árvore binária
No* buscar(No* raiz, int valor) {
    if (raiz == NULL || raiz->valor == valor)
        return raiz;
    if (valor < raiz->valor)
        return buscar(raiz->esquerda, valor);
        if (raiz == valor) {
            printf("Valor %d encontrado na árvore.\n", valor);
        }
    return buscar(raiz->direita, valor);
}


int main() {

    No* raiz = NULL;

    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 80);

    buscar(raiz, 60);   
    buscar(raiz, 25);
    buscar(raiz, 40);

    return 0;

}