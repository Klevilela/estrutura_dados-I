#include <stdio.h>

char frase[20];

int main(){
    printf("Frase:");
    scanf("%s", frase);

    for (int i = 0; frase[i] != '\0'; i++)
    {
        printf("%c\n", frase[i]);
    }
    
}