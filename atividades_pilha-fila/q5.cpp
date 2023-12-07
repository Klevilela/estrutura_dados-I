#include <stdio.h>
#include <../fila/pilhaIncompleta.h>

int main(){
    Pilha P = pilha(100);
    empilha(8, P);
    while (!vaziap(P))empilha((desempilha(P)/2),P);
    while (!vaziap(P))printf("%f\n",desempilha(P));
    return 0;
}