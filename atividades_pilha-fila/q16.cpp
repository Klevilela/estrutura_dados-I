#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "./lista_dinamica.h"
using namespace std;

int somaL(Lista L){
    int somatorio = 0;
    if (L == NULL) return 0;
    return L->item + somaL(L->prox);
}

int main(){
    Lista l = no(1,no(3, no(5, NULL)));
    int somatorio = somaL(l);

    printf("Somatorio: %i", somatorio);
}