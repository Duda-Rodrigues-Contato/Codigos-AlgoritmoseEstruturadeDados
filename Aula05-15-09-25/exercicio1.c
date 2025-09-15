#include <stdio.h>

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


// Imprimir em-ordem:
void emOrdem(No * raiz) {

    if (raiz != NULL) {

        emOrdem(raiz -> esquerda);
        printf("%d\n", raiz -> valor);
        emOrdem(raiz -> direita);
    }

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

    printf("Arvore em ordem crescente: \n");
    printf("================================\n");
    emOrdem(raiz);

    return 0;

}