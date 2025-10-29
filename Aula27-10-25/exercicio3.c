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
#include <stdlib.h>
#include <string.h>

int buscanoMeio(char *vetor[], int tamanho, char *prefixo) {

    int inicio = 0, fim = tamanho - 1, primeiroMeio = -1;

    while (inicio <= fim) {

        int meio = inicio + (fim - inicio) / 2;

        if (strncmp(vetor[meio], prefixo, strlen(prefixo)) == 0) {
            
            primeiroMeio = meio;
            fim = meio - 1; 

        } else if (strcmp(vetor[meio], prefixo) < 0) {

            inicio = meio + 1; 
        
        } else {

            fim = meio - 1; 

        }

    }

    return primeiroMeio;

}


void acharLivros(char *vetor[], int tamanho, char *prefixo) {

    int indiceInicio = buscanoMeio(vetor, tamanho, prefixo);
    int i = indiceInicio;

    if (indiceInicio == -1) {

        printf("Nenhum livro encontrado com esse prefixo.\n");
        return;

    }

    printf("Livros encontrados: \n");

    while (i < tamanho) {

        if (strncmp(vetor[i], prefixo, strlen(prefixo)) == 0) {

            printf("%s\n", vetor[i]);
            i++;
        
        } else {

            break;
        
        }

    }

}

int main() {

    char *vetor[] = {"Aprendendo C", "Banco de Dados", "C Completo", "Harpa Cristã", "Harry Potter", "Java Facil", "Python Basico"};
    char prefixo1[] = "Har";
    char prefixo2[] = "B";
    char prefixo3[] = "Do";
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    acharLivros(vetor, tamanho, prefixo1);
    acharLivros(vetor, tamanho, prefixo2);
    acharLivros(vetor, tamanho, prefixo3);

    return 0;

}