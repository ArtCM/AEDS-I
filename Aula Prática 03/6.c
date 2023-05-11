#include <stdio.h>

int main(){

    int x, y, z, n, i;

    i=1;

    printf("Insira quantos numeros deseja digitar para saber o maior e o menor entre eles.");
    printf("\nQuantos numeros deseja digitar? ");
    scanf("%i", &z);

        printf("\nDigite o numero %i: ", i);
        scanf("%i", &n);

        x = n, y = n;
        i++;

    do{
        printf("Digite o numero %i: ", i);
        scanf("%i", &n);

        if(n>x){
            x = n;
        }

        else if(n<y){
            y = n;
        }

        else{
            x = x;
            y = y;
        }

        i++;
    }
    while(i<=z);

    printf("\nO maior numero digitado foi %i", x);
    printf("\nO menor numero digitado foi %i", y);

    return 0;
}
