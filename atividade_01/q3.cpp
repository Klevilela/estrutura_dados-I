#include <stdio.h>
#include <iostream>
using namespace std;

//a)
/*char f1[10];
char f2[10];



int main(){
    cout << "Frase 1: ";
    scanf("%s", f1);
    
    cout << "Frase 1: ";
    scanf("%s", f2);

    for (int i = 0; i < 10; i++)
    {
        if (f1[i] == f2[i]){
            cout << "Sao iguais";
        }

        return 0;

    }
    

}*/


//b)
string f1;
string f2;

int main(){
    cout << "Frase 1: ";
    cin >> f1;

    cout << "Frase 1: ";
    cin >> f2;

    //getline(cin, f2);

    if (f1 == f2){
        cout << "Sao iguais"<< endl;
    }
    else{
        cout <<"Nao sao iguais"<< endl;
    }    
    
}

//c) - Na letra A, é necessário fazer uma iteração e comparar cada caracter de ambas as frases
/// Na letra B, como ambas as frases são do tipo string, bastou comparar se os valores são iguais

