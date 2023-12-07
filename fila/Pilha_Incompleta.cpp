#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No{
	public:
		char nome;
		No *prox;
		No(char n){
			nome = n;
			prox = NULL;
		}
};

class Pilha{
	public:
		No *topo;
		
		Pilha(){
			topo = NULL;
		}
		
		void push(char n){
			No *novo_topo = new No(n);
			if (isEmpty()){
				topo = novo_topo;
				
			}else{
				novo_topo->prox = topo;
				topo = novo_topo;
			}
		}
		
		char pop(){
			return topo->nome;
		}
		
		bool isEmpty(){
			return (topo == NULL);
		}
		
		void desempilha(){
			if (!isEmpty()){
				No *atual = topo;
				topo = topo->prox;
				delete atual;
			}
		}

		void mostrar(){
			No *atual = topo;
			while (atual != NULL)
			{
				cout << atual->nome << " ";
				atual = atual->prox; 
			}
			cout << endl;
		}
	
	
};

int main(){
	Pilha pilha = Pilha();
	char frase[30];
	cout << "Frase: ";
	cin.getline(frase, sizeof(frase));

	for (int i=0; frase[i]; i++){
		pilha.push(frase[i]);
	}

	cout << "Frase invertida: " << endl;
	pilha.mostrar();
	cout << pilha.pop();
	

}
