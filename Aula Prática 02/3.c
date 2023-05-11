/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int count, num;

    printf("Digite 5 numeros para saber quantos sao pares e quantos sao impares:\n");

    printf("Digite o primeiro numero:");
    scanf("%d", &num);
    if (num % 2 == 0){
        ++count;
    }

    printf("Digite o segundo numero:");
    scanf("%d", &num);
    if (num % 2 == 0){
        ++count;
    }

    printf("Digite o terceiro numero:");
    scanf("%d", &num);
    if (num % 2 == 0){
        ++count;
    }

    printf("Digite o quarto numero:");
    scanf("%d", &num);
    if (num % 2 == 0){
        ++count;
    }

    printf("Digite o quinto numero:");
    scanf("%d", &num);
    if (num % 2 == 0){
        ++count;
    }


    printf("\nVoce tem %d numeros pares", count);

    count= 5-count;

    printf("\nE %d numeros impares", count);

    return 0;
}
