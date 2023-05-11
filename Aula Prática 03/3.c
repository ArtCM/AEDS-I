#include <stdio.h>

int main(){

    float porc_a, porc_b, porc_c, porc_d, porc_e;
    int pessoas, i, idade, a, b, c, d, e;

    idade = 0, a = 0, b = 0, c = 0, d = 0, e = 0;

    i = 1;

    printf("Insira quantas idades deseja inserir para calcular o percentual entre elas.");
    printf("\nIdades: ");
    scanf("%i", &pessoas);

    do{
        printf("\nDigite a idade da pessoa %i: ", i);
        scanf("%i", &idade);

        if((idade>=1)&&(idade<=15)){
            a++;
        }

        else if((idade>=16)&&(idade<=30)){
            b++;
        }

        else if((idade>=31)&&(idade<=45)){
            c++;
        }

        else if((idade>=46)&&(idade<=60)){
            d++;
        }

        else if(idade>60){
            e++;
        }

        else{
            printf("Idade nao reconhecida.\n");
        }

        i++;
    }
    while(i<=pessoas);

    porc_a = (100/pessoas)*a;
    porc_b = (100/pessoas)*b;
    porc_c = (100/pessoas)*c;
    porc_d = (100/pessoas)*d;
    porc_e = (100/pessoas)*e;

    printf("\nFaixa etaria:");
    printf("\n1 a 15 anos - %.2f%", porc_a);
    printf("\n16 a 30 anos - %.2f%", porc_b);
    printf("\n31 a 45 anos - %.2f%", porc_c);
    printf("\n46 a 60 anos - %.2f%", porc_d);
    printf("\nMais de 60 anos - %.2f%", porc_e);

    return 0;
}
