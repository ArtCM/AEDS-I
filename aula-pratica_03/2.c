#include <stdio.h>
#include <stdlib.h>

int main(){

    int val, i, par, num, impar;

    num=0;
    par=0;
    i=0;

    printf("Digite o numero de valores que deseja saber se sao pares: ");
    scanf("%i", &val);

    do{
        printf("Digite o valor:");
        scanf("%i", &num);

        num %= 2;

        if(num == 0){
            par++;
        }

        i++;
    }
    while(i<val);

    impar = i-par;

    printf("%i numeros sao pares\n", par);
    printf("%i numeros sao impares", impar);



    return 0;
}
