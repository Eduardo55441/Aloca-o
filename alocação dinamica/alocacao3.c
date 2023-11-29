#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p = (int *)/*for�a o ponteiro ser do mesmo tipo que o ponteiro que a gente aponta, pois inicialmente � void*/malloc(sizeof(int));
    // abrevia��o de memory allocation, pede para o sistema operacional um bloco de mem�ria de um tamanho que pedimos, retornando um ponteiro que aponta para o bloco de mem�ria

    printf("%d\n", *p); // a fun��o malloc n�o trata o lixo eletronico

    *p = 1000; // alocou mem�ria e definiu no bloco o valor de 1000

    printf("%d", *p);

    // caso o computador n�o tenha mem�ria o suficiente para a alaco��o de mem�ria o valor dado � NULL (lugar nenhum), portanto podemos fazer o seguinte:
    if(ponteiro == NULL){
        printf("malloc nao funcionaou");
    }

    malloc(size_t) // tipo de dado definido na linguagem, valor inteiro sempre positivo. Serve para que n�o escrevemos uma aloca��o negativa, ja que n existe

}
