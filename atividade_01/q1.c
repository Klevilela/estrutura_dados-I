#include <stdio.h>
char frase[20];

int main(){
    printf("Frase:");
    scanf("%s", frase);
    
    int tam = 0;
    int counter = 0;
    
    while (frase[tam] != '\0')
    {   
        if (frase[tam] != ' ' && frase[tam] != '\n' && frase[tam] != '\t'){
            counter++;
        }
        tam++;
    }

    printf("Quantidade de caracteres: ");
    printf("%i", counter);

}
