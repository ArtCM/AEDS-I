#include <stdio.h>

int main(){

    float a, b;

    printf("Insira o valor de a e b para imprimir o de maior valor");
    printf("\nDigite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    if(a>b){
        printf("o maior valor e %.2f", a);
    }

    else if(b>a){
        printf("o maior valor e %.2f", b);
    }

    else{
        printf("Os dois valores são iguais");
    }

    return 0;

}
