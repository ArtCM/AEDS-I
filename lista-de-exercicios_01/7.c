#include <stdio.h>

int main(){

    int a, b;

    printf("Digite dois numeros para imprimir o maior deles.");

    printf("\nInsira o primeiro numero: ");
    scanf("%i", &a);

    printf("Insira o segundo numero: ");
    scanf("%i", &b);

    if(a>b){
        printf("\nO maior numero e %i", a);
    }

    else if(b>a){
        printf("\nO maior numero e %i", b);
    }

    else{
        printf("\nOs numeros sao iguais");
    }

    return 0;
}
