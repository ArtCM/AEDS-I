#include <stdio.h>

int main(){

    float altura, peso;
    int sexo;

    printf("Insira seu sexo e altura para saber seu peso ideal");
    printf("\nInsira seu sexo:\n[1] Homem\n[2] Mulher\n");
    scanf("%i", &sexo);

    printf("\nInsira sua altura exemplo(1.8): ");
    scanf("%f", &altura);

    if(sexo==1){
        peso = (72.7*altura)-58;
        printf("\nSeu peso ideal e: %.2f", peso);
    }

    else if(sexo==2){
        peso = (62.1*altura)-58;
        printf("\nSeu peso ideal e: %.2f", peso);
    }

    else{
        printf("\nSexo digitado errado.");
    }


    return 0;
}
