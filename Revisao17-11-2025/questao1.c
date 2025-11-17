// Transforme o Busca Sequencial iterativa em recursiva:

#include <stdio.h>

int budcaSequencialRecursiva(int vetor[], int tamanho, int valor) {

    if (tamanho < 0) {

        return -1;

    } else if (vetor[tamanho - 1] == valor) {

        return tamanho - 1;

    } else {

        return budcaSequencialRecursiva(vetor,tamanho - 1, valor);
    }

}


int main() {

    int vetor[] ={4, 8, 3, 55, 25};
    int valor = 3;
    int pos = budcaSequencialRecursiva(vetor, 5, valor);

    printf("O valor %d esta na posicao: %d\n", valor, pos);

    return 0;

}