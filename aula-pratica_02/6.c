#include <stdio.h>
    int main(){

        int dependentes;
        float salariobruto, horas, extras, imposto, salarioliquido;

        printf("Insira algumas informaçoes para calcular o salario final");

        printf("\n\nDigite o valor recebido por hora trabalhada: ");
        scanf("%f, &horas");

        printf("Digite o numero de horas trabalhadas(Ex: 1 ou 1.5): ");
        scanf("%f, &horas");

        printf("Digite o numero de horas extras trabalhadas(Ex: 1 ou 1.5): ");
        scanf("%f, &extras");

        printf("Digite o numero de dependentes que possui: ");
        scanf("%i, &dependentes");

        if (salariobruto<1434.60){
            imposto = 0
        }

        else if(salariobruto<1434.60){
            imposto = 0
        }



        salarioliquido = salarioliquido + (dependentes * 128);

        printf("O salario a receber e: %.2f", salarioliquido);

        return 0;
    }
