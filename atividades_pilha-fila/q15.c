#include <stdio.h>
#include <ctype.h>
#include "../fila/pilhaIncompleta.h"
#include "../fila/fila.h"

int main(void){
    char s[256];
    Fila F = fila(256);
    Pilha P = pilha(256);
    printf("Frase? \n");
    //scanf("%c", s);
    gets(s);
    
    int vaziaP=1;
    for (int i = 0; s[i]; i++)
    {
        if (isalpha(s[i])){
            //toupper(s[i]);
            enfileira(toupper(s[i]), F);
            empilha(toupper(s[i]), P);
            //printf("%c\n", toupper(s[i]));
        }

    }
    while (!vaziaF(F) && toupper(desinfileira(F)) == toupper(desempilha(P))){

        if (!vaziaF(F) || !vaziap(P))
        {
            vaziaP = 0;
        }

        if (vaziaP)
        {
            puts("A frase é palíndrona");
        }
        else
            puts("A frase não é palíndrona");
    };
        

    destroiF(&F);
    destroiP(&P);
    return 0;
}