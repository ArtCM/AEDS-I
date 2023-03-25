#include <stdio.h>

int main(){

    float altura, peso, imc;

    printf("Ola usuario! Vamos calcular seu imc.");
    printf("\nPrimeiro, digite sua altura em metros(exemplo: 1.80): ");
    scanf("%f", &altura);
    printf("\nAgora digite seu peso em kgs: ");
    scanf("%f", &peso);

    imc = peso/(altura * 2);

    printf("\nSeu IMC e: %.3f", imc);

return 0;

}