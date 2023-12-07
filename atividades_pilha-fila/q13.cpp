#include "../fila/fila.h"
#include <stdio.h>
int main(){
    Fila F = fila(5);
    enfileira(1, F);
    enfileira(2, F);
    enfileira(3, F);
    enfileira(desinfileira(F), F);
    enfileira(desinfileira(F), F);
    printf("%i\n", desinfileira(F));

    //último valor: 3
}