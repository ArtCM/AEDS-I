#include <stdio.h>

int main(){

    int x, resultado;

    printf("Digite um numero inteiro para saber se ele e par ou impar.");
    printf("\nNumero:");
    scanf("%i", &x);

    resultado = x % 2;

    if(resultado==0){
        printf("O numero e par");
    }
    else{
        printf("O numero e impar");
    }
}
