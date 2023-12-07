#include <stdio.h>
#include "../fila/fila.h"

int main(){
    Fila F = fila(5);
    for(int i=0; i <= 3; i++)enfileira('A'+i,F);
    while(!vaziaF(F))printf("%c\n", desinfileira(F));
    destroiF(&F);

    //resultado: ABCD
}