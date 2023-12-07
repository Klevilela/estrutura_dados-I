#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "./lista_dinamica.h"
using namespace std;

void substitui(char x, char y, Lista L){
    if (!pert(x, L));
    else{
        pert(x, L);
        L->item = y;
    }
}
int main(){
    Lista l = NULL;
    insere('a', &l);
    exibe(l);
    
    //anexe os caracteres b o b o nesta lista



}