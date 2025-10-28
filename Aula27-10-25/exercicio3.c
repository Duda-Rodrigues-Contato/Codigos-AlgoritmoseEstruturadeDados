// Busca Binária:
/*
    Uma livraria digital armazena livros classificados por tipo (ordem alfabetica).

    Modificar de títulos com nome completo, para    
    retornar todos os títulos cujos os nomes começam 
    com o prefixo indicado pelo cliente.

*/

#include <stdio.h>

int acharLivros(char vetor[], int tamanho, char valor) {

    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {

        meio = (inicio + fim) / 2;
        
        if (vetor[meio] == valor) {
            //return meio; // valor encontrado
        } else if (vetor[meio] < valor) {
            inicio = meio + 1; // busca na metade superior
        } else {
            fim = meio - 1; // busca na metade inferior
        }

    }

}

int main() {

    char vetor[] = {"Aprendendo C", "Banco de Dados", "C Completo", "Harpa Cristã", "Harry Potter", "Java Facil", "Python Basico"};
    char prefixo[] = "Har";
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    return 0;

}