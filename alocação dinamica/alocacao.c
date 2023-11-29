#include <stdio.h>
#include <stdlib.h> // Utilizar funções: malloc. calloc. realloc. e free. juntamente com o sizeof

int main(){

    int x; // Armazena um dado numa quantidade de bytes (4 bytes)
    double y; // (8 bytes)

    printf("%li\n", sizeof(x)); // Mostra o tamanho em bytes do dado
    printf("%li\n", sizeof(y)); // Mostra o tamanho em bytes do dado
    printf("%li\n", sizeof(float));

    int vetor[10];

    printf("%li\n", sizeof(vetor));

    struct x{
        int a;
        double b;
        int c;
    }; struct x xx;

    printf("%li", sizeof(xx)); // parece estar errado mas n esta (24)

    return 0;
}
