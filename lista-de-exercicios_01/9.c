#include <stdio.h>

int main(){

    float salario, prestacao;

    printf("Digite seu salario e o valor da prestacao, para avaliar a possibilidade de um emprestimo.");
    printf("\nSalario: ");
    scanf("%f", &salario);

    printf("Prestacao: ");
    scanf("%f", &prestacao);

    if((salario*0.2)<prestacao){
        printf("Emprestimo nao concedido");
    }

    else{
        printf("Emprestimo concedido");
    }


    return 0;
}
