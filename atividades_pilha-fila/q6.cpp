#include <stdio.h>
#include "../fila/pilhaIncompleta.h"
#include <string.h>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
//using namespace std;



int main(){
    string frase;
    Pilha minhaPilha = pilha(50);
    cout << "Frase: ";
    getline(cin, frase);
    stringstream ss(frase);
    vector<string> palavras; 
    
    while (ss >> frase){
        palavras.push_back(frase);
    }
    
    for (int i = palavras.size()-1; i >= 0; i--)
    {
        for(char c:palavras[i]){
            empilha(c, minhaPilha);
        }
        empilha(' ', minhaPilha);
    }

    while (!vaziap(minhaPilha))
    {
       printf("%c", desempilha(minhaPilha));
    }
    
    destroiP(&minhaPilha);
    return 0;
    
}