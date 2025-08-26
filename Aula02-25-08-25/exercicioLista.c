//Exercícios Listas

//Implemente uma lista encadeada simples em C/C++ com as seguintes funcionalidades:
//• Inserir elementos no início da lista.
//• Inserir elementos no final da lista.
//• Imprimir todos os elementos da lista.
//Ex:
//Inserir no início: 10, 20, 30
//Inserir no final: 40, 50

//Saída esperada: 30 -> 20 -> 10 -> 40 -> 50 -> NULL

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No* prox;
} No;


No* inserirInicio(No* head, int valor) {
    No* novo = (No*)malloc(sizeof(No));

    novo->dado = valor;
    novo->prox = head;

    return novo;

}

No* inserirFinal(No* head, int valor) {
    No* novo = (No*)malloc(sizeof(No));

    novo->dado = valor;
    novo->prox = NULL;

    if(head)
        return novo;

    No* temp = head;
    while(temp->prox)
        temp = temp->prox;
    temp->prox = novo;

    return head;

}

void imprimirLista(No* head) {

    No* temp = head;

    while(temp != NULL) {
        printf("%d ->", temp->dado);
        temp = temp->prox;
    }

    printf("NULL\n");
}


int main() {

    int num = 0;
    No* head = NULL;
    
    printf("Digite numero do inicio: \n");
    scanf("%d", &num);

    inserirInicio(head, num);

    printf("Digite numero 2 do inicio: \n");
    scanf("%d", &num);

    inserirInicio(head, num);

    printf("Digite numero 3 do inicio: \n");
    scanf("%d", &num);

    inserirInicio(head, num);

    printf("Digite numero 1 do final: \n");
    scanf("%d", &num);

    inserirFinal(head, num);

    printf("Digite numero 2 do final: \n");
    scanf("%d", &num);
    inserirFinal(head, num);

    imprimirLista(head);

    return 0;

}