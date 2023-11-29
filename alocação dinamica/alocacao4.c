#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p = (int *) malloc(sizeof(int));

    *p = 1000;

    printf("%d\n", *p);

    free(p); // desaloca a mem�ria definida no final do programa. Volta a mem�ria para o sistema. O valor continua na mem�ria.

    int *m = (int *) malloc(sizeof(int)); /* O programa pode pegar o bloco de endere�o utilizado pelo ponteiro anterior, ja que a mem�ria foi devolvida, se transformando em lixo
    Portanto o valor do ponteiro pode ser 1000, que est� alocado pelo ultimo ponteiro*/

    printf("%d\n", *p); // N�o tem mais o valor 100 como definido, j� que foi desalocado

    return 0;
}
