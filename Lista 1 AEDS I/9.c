#include <stdio.h>

int main(){

    float a, b, troca1, troca2;

    printf("Digite os valores das variaveis a e b que deseja trocar entre si\n\n");
    printf("Variavel A: ");
    scanf("%f", &a);
    printf("Variavel B: ");
    scanf("%f", &b);

    troca1 = b;

    troca2 = a;

    printf("\nSeu novos valores sao:\nA = %.2f \nB = %.2f", troca1, troca2 );

return 0;
    
}