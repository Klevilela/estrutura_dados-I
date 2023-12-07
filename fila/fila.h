#include <stdlib.h>
#include <stdio.h>

//typedef int Itemf;
typedef char Itemf;
typedef struct fila
{
    int max;
    int total;
    int inicio;
    int fim;
    Itemf *item;
}*Fila;

Fila fila(int m){
    Fila F = (Fila)malloc(sizeof(struct fila));
    F->inicio=0;
    F->fim=0;
    F->total = 0;
    //F->item = (int*)malloc(m*sizeof(Itemf));
    F->item = (char*)malloc(m*sizeof(Itemf));
    
    return F;
}

int vaziaF(Fila F){
   return (F->total == 0); 
}

int cheiaF(Fila F){
    return (F->max == F->total);
}
void enfileira(Itemf i, Fila F){
    if (cheiaF(F)){puts("Fila cheia");abort();}
    else{
        F->item[F->fim] = i;
        F->total++;
        F->fim++;
    }
}

Itemf desinfileira(Fila F){
    if (vaziaF(F)){puts("A fila está vazia");abort();}
    else{
        Itemf x = F->item[F->inicio];
        F->total--;
        F->inicio++;
        return x;
    }
}

void destroiF(Fila *G){
    free((*G)->item);
    free(*G);
    *G = NULL;
}