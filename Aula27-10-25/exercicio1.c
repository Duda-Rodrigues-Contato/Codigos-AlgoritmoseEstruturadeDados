// Conte quantas vezes o número 7 aparece no vetor: {7, 3, 5, 7, 9, 2, 7, 1, 4, 6}
#include <stdio.h>

int buscaSequencial (int vetor[], int tamanho, int valor) {

    for (int i = 0; i < tamanho; i++) {

        if (vetor[i] == valor)
            return i;
    }

    return -1;

}


int main() {

    int vetor[] = {7, 3, 5, 7, 9, 2, 7, 1, 4, 6};
    int valor = 7;
    int posBusca = buscaSequencial(vetor, 10, valor);

    if (posBusca != -1)
        printf("Valor: %d encontrado na posicao: %d\n", valor, posBusca);
    else
        printf("Valor nao encontrado\n");
        
    return 0;

}