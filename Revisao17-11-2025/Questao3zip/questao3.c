/*

    Implemente uma busca binária modificada que, se o elemento não for encontrado, informe
    qual o valor mais próximo existente no vetor.

    Exemplo:
    - Vetor: {5, 10, 15, 20, 25, 30}
    - Procure: 18
    Saida esperada: "Valor nao encontrado. Mais proximo: 20"

*/ 

#include <stdio.h>
#include <stdlib.h>

int buscaBinaria(int vetor[], int tamanho, int valor) {

    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {

        meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {

            return meio;

        } else if (vetor[meio] < valor) {

            inicio = meio + 1;

        } else {

            fim = meio - 1;
        }

    }

    if (inicio >= tamanho) {

        return fim;

    }

    if (fim < 0) {

        return inicio;

    }

    int diferencaIni = abs(vetor[inicio] - valor);
    int diferencafim = abs(vetor[fim] - valor);

    if (diferencaIni < diferencafim) {

        return inicio;

    } else {

        return fim;

    }

}


int main() {

    int vetor[] = {5, 10, 15, 20, 25, 30};
    int valor = 0;
    int tam = 6;
    int pos = buscaBinaria(vetor, tam, valor);
    
    if (vetor[pos] == valor) {

        printf("Valor %d encontrado na posicao: %d.\n", valor, pos);

    } else {

        printf("Valor nao encontrado. O mais proximo eh: %d\n", vetor[pos]);

    }

    return 0;

}