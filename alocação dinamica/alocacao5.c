#include <stdio.h>
#include <stdlib.h>
// calloc

int main(){

    int *p;
    p = (int *) calloc(5, sizeof(int)); /* recebe 2 argumentos, o "10" deve ser um numero inteiro positivo, que informa quantos argumentos do segundo queremos (sizeof(int)) 5*4=20 bytes
    Al�m disso, a fun��o calloc inicializa o valor do bloco de mem�ria como 0, o bloco � dividido em 4 ints*/

    /* H� um jeito de fazer algo parecido com o malloc: p = (int *) malloc(5 * sizeof(int)) por�m n�o inicializa com 0*/

    /* Como o bloco est� dividido por partes inteiro, a gente pode alocar numeros inteiro em diferentes endere�os do ponteiro:*/

    //*(p+1) = 10; // armazena no segundo bloco do endere�o

    int i;
    for(i=0; i<5; i++){
        printf("Endereco de p%d = %p | Valor de p%d = %d\n", i, &p[i], i, *(p+1));
    }

    printf("%d", *p);



    return 0;
}
