#include <stdio.h>

int main(){

    float bruto, liquido, imposto, dias;

    printf("Digite o numero de dias trabalhados para saber o valor a ser pago\n\n");
    printf("Dias: ");
    scanf("%f", &dias);

    bruto = dias * 30;

    imposto = (bruto/100) * 8;

    liquido = bruto - imposto;

    printf("Salario a ser pago: %.2f", liquido);


return 0;
    
}