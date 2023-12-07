#include <stdlib.h>
#include <iostream>
#include <../fila/pilhaIncompleta.h>
using namespace std;

int main(){
    Pilha P = pilha(3);
    empilha(1, P);
    empilha(2, P);
    printf("%d\n", desempilha(P));
    printf("%d\n", desempilha(P));
    printf("%d\n", desempilha(P));
    return 0;
}