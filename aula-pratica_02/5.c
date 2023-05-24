#include <stdio.h>

int main() {

    int idade;

    printf("Digite a idade do atleta para saber sua categoria (Min 5 anos, Max 25 anos)");
    printf("\nIdade:");
    scanf("%i", &idade);

    if( idade<=7 ){
        if( idade>=5){
            printf("\nO atleta pertence a categoria Infantil A");
        }
        else {

        printf("\nO atletca nao se encaixa em nenhuma categoria");
        }
    }

    else if( idade<=10 ){
        if( idade>=8){
            printf("\nO atleta pertence a categoria Infantil B");
        }
        else {

        printf("\nO atletca nao se encaixa em nenhuma categoria");
        }
    }

    else if( idade<=13 ){
        if( idade>=11){
            printf("\nO atleta pertence a categoria Juvenil A");
        }
        else {

        printf("\nO atletca nao se encaixa em nenhuma categoria");
        }
    }

    else if( idade<=17 ){
        if( idade>=14){
            printf("\nO atleta pertence a categoria Juvenil B");
        }
        else {

        printf("\nO atletca nao se encaixa em nenhuma categoria");
        }
    }

    else if( idade<=25 ){
        if( idade>=18){
            printf("\nO atleta pertence a categoria Senior");
        }
        else {

        printf("\nO atletca nao se encaixa em nenhuma categoria");
        }
    }


    return 0;
}
