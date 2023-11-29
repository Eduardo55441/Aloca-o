#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p = (int *) malloc(sizeof(int));

    *p = 1000;

    printf("%d\n", *p);

    free(p); // desaloca a memória definida no final do programa. Volta a memória para o sistema. O valor continua na memória.

    int *m = (int *) malloc(sizeof(int)); /* O programa pode pegar o bloco de endereço utilizado pelo ponteiro anterior, ja que a memória foi devolvida, se transformando em lixo
    Portanto o valor do ponteiro pode ser 1000, que está alocado pelo ultimo ponteiro*/

    printf("%d\n", *p); // Não tem mais o valor 100 como definido, já que foi desalocado

    return 0;
}
