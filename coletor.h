#ifndef COLETOR_H_INCLUDED
#define COLETOR_H_INCLUDED
#include "coletor.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct contref{
    void *info;
    void *cont;
}contref;

contref *malloc2(int tamanho);
void atrib2(contref **a, contref **b);


#endif // COLETOR_H_INCLUDED
