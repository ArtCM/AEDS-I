#include <stdio.h>
#include <math.h>

int main(){

    float hipo, cat1, cat2;

    printf("Insira os catetos para calcular a hipotenusa\n\n");
    printf("Cateto 1: ");
    scanf("%f", &cat1);
    printf("\nCateto 2: ");
    scanf("%f", &cat2);

    hipo = (cat1*cat1)+(cat2*cat2);

    //Para usarmos o sqrt(num) precisamos da biblioteca math.h
    hipo = sqrt(hipo);

    printf("A hipotenusa e: %.2f", hipo);

return 0;
    
}