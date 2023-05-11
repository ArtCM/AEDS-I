#include <stdio.h>

int main(){

    int num, y, x;

    y=1, x=1;

    printf("Digite um numero inteiro para saber todos os divisores ate ele inicados do 1.");
    printf("\nDigite o numero: ");
    scanf("%i", &num);

    do{
        printf("\nOs Divisores ate %i sao: ", x);
        do{

           if((x % y) == 0){
            printf("%i ", y);
            y++;
           }

           else{
            y++;
           }
        }
        while(x>=y);
        y=1;
        x++;
    }
    while(num>=x);

    return 0;
}
