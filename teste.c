#include <stdio.h>

//q1


char frase[20];
char frase2[20];

int main(){
    printf("Digite o valor:");
    scanf("%s", frase);
    printf("%s\n", frase);
    printf("%s\n", frase2);

    int tam = 0;

    while (frase[tam] != '\0')
    {
        if (frase[tam ] == '\n'){
            frase[tam ] = '\0';
        }

        tam ++;
    }

    tam = 0;

    while (frase[tam] != '\0')
    {
        //printf("%d = %d\n", tam, frase[tam]);
        tam++;
    }
    printf("Tamanho: %d\n", tam);

    for (tam = 0; tam < 20; tam++)
    {
        printf("\n%c", frase[tam]);
    }

    
    

       
}

/*char frase2[20];
int mostra_letra(){
    int i = 0;

    printf("Digite uma frase:");
    scanf("%s", frase2);

    
    
}
*/

