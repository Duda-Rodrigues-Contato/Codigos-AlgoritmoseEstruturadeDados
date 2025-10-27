// Conte quantas vezes o número 7 aparece no vetor: {7, 3, 5, 7, 9, 2, 7, 1, 4, 6}
#include <stdio.h>

int buscaSequencial (int vetor[], int tamanho, int valor) {
    
    int cont = 0;

    for (int i = 0; i < tamanho; i++) {

        if (vetor[i] == valor)
            cont++;
    }

    if (cont == 0) 
        return -1;
    else 
        return cont;

}


int main() {

    int vetor[] = {7, 3, 5, 7, 9, 2, 7, 1, 4, 6};
    int valor = 7;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
 
    int resultado= buscaSequencial(vetor, tamanho, valor);

    if (resultado != -1)
        printf("Valor: %d encontrado na posicao: %d\n", valor, resultado);
    else
        printf("Valor nao encontrado\n");

    return 0;

}