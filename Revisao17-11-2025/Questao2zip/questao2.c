/*
    Dado um vetor ordenado (Busca Binária) com valores que podem se repetir, modifique a busca binária 
    para encontrar sempre a primeira ocorrência do elemento desejado. 

    Caso haja múltilpas ocorrências, retorne o indice do elemento mais à esquerda (menor indice).

    Exemplo: 
        Vetor: {2, 4, 4, 4, 7, 9, 12}
        Valor buscado: 4
        Saída: "Primeira ocorrência do valor 4 encontrado na posição 1"

*/ 

#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor) {

    int inicio = 0, fim = tamanho - 1, meio;
    int x = -1;

    while (inicio <= fim) {

        meio = (inicio + fim) / 2;

        if (vetor[meio] == valor) {

            x = meio;
            fim = meio - 1;

        } else if (vetor[meio] < valor) {

            inicio = meio + 1;

        } else

            fim = meio - 1; 

    }
    
    return x; 

}


int main() {

    int vetor[] = {2, 4, 4, 4, 7, 9, 12};
    int valor = 4;
    int pos = buscaBinaria(vetor, 7, valor);

    if (pos != -1)

        printf("Primeira ocorrencia do valor %d encontrado na posicao %d.\n", valor, pos);

    else

        printf("Valor nao encontrado.\n");

    return 0;

}