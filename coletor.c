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
        if( (*a)->cont == 1 ) { // Apenas uma referência ao endereço
            contref *aux = *a;
            *a = NULL;
            aux->cont -= 1;
            free(aux);
            printf("Novo endereco do ponteiro nulo: %d\n", a);

}   else {  // Mais de uma referencia ao endereço
           (*a)->cont -= 1;
            *a = NULL;
            printf("Novo endereco do ponteiro nulo: %d\n", a);
        }
    }

    if( (*a)->cont == 1 ){  // Caso apenas uma referência ao endereço
        contref *aux = *a;
        *a = *b;
        (*b)->cont += 1;
        aux->cont -= 1;;
        free(aux);


        }else{  // Caso mais de uma referência ao endereço
    (*a)->cont -= 1;
    *a = *b;
    (*b)->cont += 1;

    }
}
