#include <stdio.h>
#include <stdlib.h>
#include "coletor.h"

int main()
{
   contref *a = malloc2(sizeof(int));
    a->info = 10;
    printf("Endereco de A: %d\nConteudo de A: %d\nReferencias para %d: %d\n\n", a, a->info, a, a->cont);

    contref *b = malloc2(sizeof(int));
    b->info = 20;
    printf("Endereco de B: %d\nConteudo de B: %d\nReferencias para %d: %d\n\n", b, b->info, b, b->cont);

    printf("\n--> Atribuicao A em B <-- \n");
    atrib2(&a, &b);
    printf("Endereco de A: %d\nConteudo de A: %d\nReferencias para %d: %d\n\n", a, a->info, a, a->cont);
    printf("Endereco de B: %d\nConteudo de B: %d\nReferencias para %d: %d\n", b, b->info, b, b->cont);
    printf("-------------------------\n\n");

    contref *c = malloc2(sizeof(char));
    c->info = 'Z';
    printf("Endereco de C: %d\nConteudo de C: %c\nReferencias para %d: %d\n\n", c, c->info, c, c->cont);

    printf("Atribuicao B para NULL: \n");
    contref *d = NULL;
    atrib2(&b, &d);
    return 0;
}
