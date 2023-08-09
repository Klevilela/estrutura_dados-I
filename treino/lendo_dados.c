#include <stdio.h>

int main()
{
    int idade;
    char sexo;

    printf("Idade: ");
    scanf("%d", &idade);
    /*printf("%d", &idade);*/

    printf("\nSexo: ");
    scanf("%c", &sexo);
    sexo = getchar();
    /*scanf("%c", sexo);*/

    printf("\nSexo: '%c'", sexo);
    printf("\nIdade: %d", idade);

    return 0;
}