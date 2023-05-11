#include <stdio.h>
#include <math.h>

int main(){

    float x, resultado;

    printf("Insira o valor de x para calcular a expressao");
    printf("Valor de x: ");
    scanf("%f", &x);

    if(x>=0){

        resultado = (x*x);
        printf("\no valor de x e: %.2f", resultado);
    }

    else{
        resultado = sqrt(x);
        printf("\no valor de x e: %.2f", resultado);
    }

    return 0;
