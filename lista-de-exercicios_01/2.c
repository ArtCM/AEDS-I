#include <stdio.h>
#include <math.h>

int main(){

    float a, raiz;

    printf("Calcule a raiz de um numero");
    printf("\nDigite o numero: ");
    scanf("%f", &a);

    if(a>=0){
        raiz = sqrt(a);
        printf("\nA raiz e %.2f", raiz);
    }

    else{
        printf("Numero invalido");
    }
}
