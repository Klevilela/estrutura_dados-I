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
			if (isEmpty()){
				*inicio = n;
				*fim = n;
			}
			else{
				*fim = n;
				fim->prox = NULL;
			}
			
		}
		
		char pop(){
			
		}
		
		bool isEmpty(){
			return (inicio == NULL);
		}
	
	    void  popAll(){
	    	
	    	
		}

};

int main(){
	
	Fila fila1 = Fila();
	fila1.append('a');	
	fila1.append('b');	
	fila1.append('c');	
    
	//cout << "%c" << fila1.inicio;
	cout << "oi";
	
}
