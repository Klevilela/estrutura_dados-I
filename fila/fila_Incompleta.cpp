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

class Fila{
	public:
		No *inicio;
		No *fim;
		
		Fila(){
			inicio = NULL;
			fim = NULL;
		}
		
		void append(char n){
            No *novoNo = new No(n);
            if (isEmpty()){
                inicio = novoNo;
                fim = inicio;
            }
            else{
                fim->prox = novoNo;
                fim = novoNo;
            }
        }
        
		
		char pop(){
            if (isEmpty()){
                return '\0';
            }
            else{
                inicio = inicio->prox;
                return inicio->nome;
            }
        }
		
		bool isEmpty(){
			return (inicio == NULL);
		}

        void mostrar()
        {
            No *atual = inicio;
            while (atual != NULL)
            {
                cout << atual->nome << " ";
                atual = atual->prox;
            }
            cout << endl;
        }

        void  popAll(){

            while(inicio != NULL){
                if (!isEmpty()){
                    No *atual = inicio;
                    inicio = inicio->prox;
                    delete atual;
                }
            }
		}

};

int main(){
	
	Fila fila = Fila();
	fila.append('a');	
	fila.append('b');	
	fila.append('c');
    
	//cout << "%c" << fila1.inicio;
	//cout << "oi";
    fila.mostrar();
	//printf("oi");
    fila.pop();
    fila.mostrar();

    fila.append('d');
    fila.mostrar();

    fila.popAll();
    fila.append('r');
    fila.mostrar();
}

/*
No letraA = No('a');
*novoNo = letraA;
novoNo = {nome ='a', proximo = Null}
*/