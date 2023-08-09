#include <stdio.h>

int main(){
    int a, b;
    int soma;
    printf("Número A: ");
    scanf("%d", &a);
    printf("Número B: ");
    scanf("%d", &b);

    soma = a + b;

    printf("Soma: %d", soma);

    return 0;  
}