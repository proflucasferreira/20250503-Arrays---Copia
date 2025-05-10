/* 2-Crie um programa que leia do teclado seis valores inteiros e em seguida 
mostre na tela os valores lidos em ordem inversa. */

#include <stdio.h>

int main(){

    int valores[6];

    for(int i = 0; i < 6; i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    printf("\nOrdem inversa: ");
    for(int i = 5; i >= 0; i--){
        printf(" %d", valores[i]);
    }
    printf("\n");

    return 0;
}