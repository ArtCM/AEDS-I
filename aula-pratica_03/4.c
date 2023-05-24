#include <stdio.h>

int main(){

    int x, y;

    printf("Digite um numero inteiro para saber se ele e primo.\n");
    printf("Numero: ");
    scanf("%i", &x);

    if(((x%2)==0)||((x%3)==0)||((x%5)==0)||((x%7)==0)){
        printf("\n%i nao e um numero primo.", x);
    }

    else{
        printf("\n%i e um numero primo.", x);
    }

    return 0;
}
