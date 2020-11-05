#include "coletor.h"
#include <stdlib.h>
#include <stdio.h>



contref *malloc2(int tamanho){
   contref *a = (contref *)malloc(tamanho);
   a->cont = 1;
   return a;
}

void atrib2(contref **a, contref **b){
     if( *b == NULL ){
        if( (*a)->cont == 1 ) { // Apenas uma refer�ncia ao endere�o
            contref *aux = *a;
            *a = NULL;
            aux->cont -= 1;
            free(aux);
            printf("Novo endereco do ponteiro nulo: %d\n", a);

}   else {  // Mais de uma referencia ao endere�o
           (*a)->cont -= 1;
            *a = NULL;
            printf("Novo endereco do ponteiro nulo: %d\n", a);
        }
    }

    if( (*a)->cont == 1 ){  // Caso apenas uma refer�ncia ao endere�o
        contref *aux = *a;
        *a = *b;
        (*b)->cont += 1;
        aux->cont -= 1;;
        free(aux);


        }else{  // Caso mais de uma refer�ncia ao endere�o
    (*a)->cont -= 1;
    *a = *b;
    (*b)->cont += 1;

    }
}
