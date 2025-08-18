#include <stdio.h>

typedef struct {

    char nome[25];
    float mate1;
    float mate2;
    float fisi1;
    float fisi2;
    struct Dados *mediaNotas;

} Dados;

int main() {

    Dados A = {"Maria", 10.0, 5.3, 7.9, 8.0};
    
    return 0;

}