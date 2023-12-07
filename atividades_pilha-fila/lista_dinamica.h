#include <stdio.h>
#include <stdlib.h>

#define fmt "%d "
typedef int Item;
//typedef char Item;
typedef struct no
{
    Item item;
    struct no *prox;
}*Lista;

Lista no(Item x, Lista p){
    Lista n = (Lista)malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void exibe(Lista L){
    printf(fmt, L->item);
    L = L->prox;
}

void anexa(Lista *A, Lista B){
    if (B == NULL){
        printf("Lista vazia");
    }
    
    while(*A != NULL){
        A = &(*A)->prox;
        *A = B;
    }
}

void    insere(Item x, Lista *L){
    //L->prox = no(x, L);
    Lista novo = no(x, *L);
    if (L == NULL){
        *L = novo;
    }
    else{
        Lista temp = *L;
        while (temp->prox != NULL)
        {
            temp = temp->prox;
        }

        temp->prox = novo;       
    }    
}

void destroi(Lista *L){
    Lista n = *L;
    *L = n->prox;
    free(n);
}

int tam(Lista L){
    if (L == NULL){
        return 0;
    }

    return 1 + tam(L->prox);
}

int pert(Item x, Lista L){
    if (L == NULL) return 0;
    if (x == L->item) return 1;

    return pert(x, L->prox);
}

Lista clone(Lista L){
    if (L == NULL) return 0;
    return no(L->item, clone(L->prox));
}

Lista exibe_inv(Lista L){
    if (L == NULL) return 0;
    exibe_inv(L->prox);
    printf(fmt, L->item);
}