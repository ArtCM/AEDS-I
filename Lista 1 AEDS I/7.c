#include <stdio.h>

int main(){

    float bruto, liquido, imposto, gratificacao;

    printf("Digite seu salario bruto para saber quanto devera receber\n\n");
    printf("Salario Bruto: ");
    scanf("%f", &bruto);

    imposto = (bruto/100) * 7;

    gratificacao = (bruto/100) * 5;

    liquido = bruto - imposto + gratificacao;

    printf("\n\nSeu salario a receber e: %.2f", liquido);

return 0;
    
}