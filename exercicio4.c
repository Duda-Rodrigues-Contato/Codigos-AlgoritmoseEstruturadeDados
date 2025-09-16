#include <stdio.h>

typedef struct No {

    int valor;
    struct No* esquerda;
    struct No* direita;

} No;


// Travessia em ordem
void emOrdem(No* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->esquerda);
        cout << raiz->valor << " ";
        emOrdem(raiz->direita);
    }
}

int main() {

    No* raiz = NULL;

    // Inserções
    raiz = inserir(raiz, 40);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 60);
    raiz = inserir(raiz, 10);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 70);

    printf("Arvore em ordem: ");
    emOrdem(raiz);

    printf("Arvore pre ordem: ");

    
    return 0;
}