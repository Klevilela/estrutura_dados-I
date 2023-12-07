//Dupla: Sara e Kleberson

#include <stdio.h>
#include "../fila/pilhaIncompleta.h"
int main(){
    int qtd_itens, tamanho;
    cout << "Quantidade de itens: ";
    cin >> qtd_itens;
    tamanho = qtd_itens;
    int valores[tamanho];

    Pilha A = pilha(tamanho);
    Pilha B = pilha(tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        int valor;
        cout << "Valor: ";
        cin >> valor;
        valores[i] = valor;
    }
    

    for (int i = 0; i < tamanho; i++)
    {
        if (vaziap(A) || valores[i] < A->item[A->topo]){
            empilha(valores[i], A);
        }
        else{
            while (!vaziap(A) && valores[i] > A->item[A->topo]){
                empilha(desempilha(A), B);
            }

            empilha(valores[i], A);
            
            while (!vaziap(B))
            {
                empilha(desempilha(B), A);
            }
            
        }
    }
    
    

    
    printf("\nPilha ordenada: ");
    while(!vaziap(A)){
        //cout << "%c"<< desempilha(A);
        printf("%i ", desempilha(A));
    }
    

    destroiP(&A);
    destroiP(&B);
    
}