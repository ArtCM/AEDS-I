#include <stdio.h>

int main(){

    int a, b, diferenca;

    printf("Digite dois numeros para imprimir o maior deles.");

    printf("\nInsira o primeiro numero: ");
    scanf("%i", &a);

    printf("Insira o segundo numero: ");
    scanf("%i", &b);

    if(a>b){
            diferenca = a-b;
        printf("\nO maior numero e %i", a);
        printf("\nA diferenca entre os dois numeros e %i", diferenca);
    }

    else{
            diferenca = b-a;
        printf("\nO maior numero e %i", b);
        printf("\nA diferenca entre os dois numeros e %i", diferenca);
    }

    return 0;
}
