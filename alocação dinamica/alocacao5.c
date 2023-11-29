#include <stdio.h>
#include <stdlib.h>
// calloc

int main(){

    int *p;
    p = (int *) calloc(5, sizeof(int)); /* recebe 2 argumentos, o "10" deve ser um numero inteiro positivo, que informa quantos argumentos do segundo queremos (sizeof(int)) 5*4=20 bytes
    Além disso, a função calloc inicializa o valor do bloco de memória como 0, o bloco é dividido em 4 ints*/

    /* Há um jeito de fazer algo parecido com o malloc: p = (int *) malloc(5 * sizeof(int)) porém não inicializa com 0*/

    /* Como o bloco está dividido por partes inteiro, a gente pode alocar numeros inteiro em diferentes endereços do ponteiro:*/

    //*(p+1) = 10; // armazena no segundo bloco do endereço

    int i;
    for(i=0; i<5; i++){
        printf("Endereco de p%d = %p | Valor de p%d = %d\n", i, &p[i], i, *(p+1));
    }

    printf("%d", *p);



    return 0;
}
