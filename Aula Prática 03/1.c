#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float soma, num1, num2;

    soma = 0;


    do{
        printf("\n----------MENU----------\n");
        printf("\n1 - Adicao");
        printf("\n2 - Subtracao");
        printf("\n3 - Multiplicacao");
        printf("\n4 - Divisao");
        printf("\n0 - Sair\n\n");
        scanf("%i", &i);
        if(i==0){
            return(0);
        }
    }
    while(i<1 || i>5);

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

        if(i==1){
            soma = num1+num2;
            printf("%.2f\n", soma);
            return main();
        }

        else if(i==2){
            soma = num1-num2;
            printf("%.2f\n", soma);
        }

        else if(i==3){
            soma = num1*num2;
            printf("%.2f\n", soma);
        }

        else if(i==4){
            soma = num1/num2;
            printf("%.2f\n", soma);
            return(main);
        }

        else{
            printf("Escolha uma opcao valida");
        }
}
