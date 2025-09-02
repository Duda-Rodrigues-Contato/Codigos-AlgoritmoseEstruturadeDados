#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Fila {
    
    char dado;
    struct Fila* inicio;
    struct Fila* final;

} Fila;


Fila* enqueue(Fila* fim, char valor) {
    Fila* novo = (Fila*)malloc(sizeof(Fila));
    
    novo-> dado = valor;
    novo-> final = NULL;
    
    if (fim != NULL) 
        fim -> final = novo;

    return novo;
}


Fila* dequeue(Fila* inicio) {
    
    if (inicio == NULL) 
        return NULL;

    Fila* temp = inicio;
    
    inicio = inicio -> inicio;
    
    return inicio;

}

int main() {

    Fila* fila = NULL;

    char palavra[100];
    int cont = 0;

    while (cont <= 3) {
        printf("Digite o nome: ");
        scanf("%s", palavra);

        enqueue(fila, palavra);

        cont++;
    }

    dequeue(fila);

    return 0;

}