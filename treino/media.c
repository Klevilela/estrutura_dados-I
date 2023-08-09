#include <stdio.h>
#include <conio.h>

int main(){
    int a, b;
    float media;

    printf("Valor A: ");
    scanf("%d", &a);
    
    printf("\n");
    
    printf("Valor B: ");
    scanf("%d", &b);

    media = (a+b) / 2;

    if (media >= 7.0){
        printf("\nAprovado !");
    }else{
        printf("\nReprovado!");
    }

    printf("\nMedia: %f", media);

}