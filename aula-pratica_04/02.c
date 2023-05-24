#include <stdio.h>

int main(){

    int i;
    float arranjo[5];

    printf("Digite 5 numeros inteiros para alterar a ordem do menor elemento com o da primeira posicao");

    printf("\n\nDigite o primeiro elemento: ");
    scanf("%f", &arranjo[0]);


    for(i=1; i<=4; i++){
        printf("Digite o proximo elemento: ");
        scanf("%f", &arranjo[i]);
    }

    i=1;

    for(i=1; i<=4; i++){
        if(arranjo[0]>arranjo[i]){
            arranjo[0] = arranjo[i];
        }
        if else(arranjo[0])
    }

    return 0;

}
