#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../fila/pilhaIncompleta.h"
#include <iostream>
using namespace std;

bool isOperator(char c){
	return c == '~' || '&' || '|';
}

bool isOperating(char c){
	return c == 'v' || c == 'V' || c == 'F' || c == 'f';
}

int isTrue(char y){
	return y =='V' || y =='v';
}

char convertBoolToChar(int i){
	if(i == 1){
		return 'V';
	}
	return 'F';
}

int prio(char o){
    switch (o)
    {
        /* case '(': return 0;
        case '+':
        case '-': return 1;
        case '*': 
        case '/': return 2; */
        case '(': return 0;
        case '|': return 1; 
        case '&': return 2;
        case '~': return 3; 

    
    }
    return -1;
}

char *posfixa(char *e){
    static char s[256];
    int j=0;
    Pilha P = pilha(256);

    for(int i=0; e[i]; i++)
        if(isdigit(e[i]) || (isalpha(e[i]) && isOperating(e[i]))) s[j++] = e[i];
        else if(strchr("~&|", e[i])) empilha(e[i], P);
        else if(e[i] == ')') s[j++] = desempilha(P);
    s[j] = '\0';
    destroiP(&P);
    return s;
}


float valor(char *e) {
    Pilha P = pilha(256);

    for (int i = 0; e[i]; i++) {
        if(isOperating(e[i])) empilha(e[i], P);
		
		else {
			char y = desempilha(P);
			char x;
		    y = isTrue(y);
		    if(e[i] != '~'){
                x = desempilha(P);
    			x = isTrue(x);
			}
			switch(e[i]){
				case '~': empilha(convertBoolToChar(!y), P); break;
				case '|': empilha(convertBoolToChar(x||y), P); break;
				case '&': empilha(convertBoolToChar(x&y), P); break;
		   	}
        }
    }

    char resultado = desempilha(P);
    destroiP(&P);
    return resultado;
}


int main(){
    char expressao[30];
    //string expressao;
    cout << "Expressao infixa: ";
    
    //getline(cin, expressao);
    cin >> expressao;

    //char* posfixa_resultado = posfixa(expressao);
    char* posfixa_resultado = posfixa(expressao);
    char resultado = valor(posfixa_resultado);

    printf("Posfixa: %s\n\n", posfixa_resultado);
    printf("Valor: %c\n\n", resultado);

}