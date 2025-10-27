// Busca Binária: Conte quantas comparações para encontrar 100 (10, 20, 30, ..., 100)

#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor) {

    int inicio = 0, fim = tamanho - 1, meio;
    int cont = 0;

    while (inicio <= fim) {

        meio = (inicio + fim) / 2;
        cont++;
        
        if (vetor[meio] == valor) {
            return cont;
            //return meio; // valor encontrado
        } else if (vetor[meio] < valor) {
            inicio = meio + 1; // busca na metade superior
        } else {
            fim = meio - 1; // busca na metade inferior
        }

    }
    
    //printf("Numero de comparacoes e %d.\n", cont);
    //return cont;
    return -1; // valor não encontrado

}

int main() {

    int vetor[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int valor = 100;
    int pos = buscaBinaria(vetor, 10, valor);

    //printf("Numero de comparacoes e %d.\n", pos);
    
    if (pos != -1)
        printf("Numero de comparacoes e %d.\n", pos);
    else
        printf("Numero nao encontrado\n");

    return 0;

}
