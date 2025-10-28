// Busca Binária:
/*

    Uma livraria digital armazena livros classificados por título (ordem alfabética). 
    O sistema atual usa busca binária para localizar um título exato, mas agora o 
    cliente quer buscar por prefixos, ou seja, ao digitar "Har", o sistema deve retornar 
    todos os livros cujos títulos começam com o prefixo "Har" (ex.: "Harry Potter", "Harpa Cristã", etc.).
    
    Modifique a busca binária para retornar uma lista com todos os livros cujos títulos iniciam com determinado prefixo informado.

    Exemplos:
    - Lista ordenada de títulos: ["Aprendendo C", "Banco de Dados", "C Completo", 
    "Harpa Crista", "Harry Potter", "Java Facil", "Python Basico"]
    - Prefixo buscado: "Har"

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