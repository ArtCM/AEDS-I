#include <stdio.h>

int main(){

    float alt, peso, imc;

    printf("Digite sua altura e peso para calcular seu IMC.");

    printf("\nAltura: ");
    scanf("%f", &alt);

    printf("Peso:");
    scanf("%f", &peso);

    imc =  peso/ (alt * alt);

    if(imc<18.5){
        printf("Voce esta abaixo do peso");
    }

    else if(imc>18.6 && imc<24.9){
        printf("Voce esta saudavel");
    }

    else if(imc>25.0 && imc<29.9){
        printf("Voce esta com Peso em excesso");
    }

    else if(imc>30.0 && imc<34.9){
        printf("Voce esta com Obesidade Grau I");
    }

    else if(imc>35.0 && imc<39.0){
        printf("Voce esta com Obesidade Grau II(severa)");
    }

    else if(imc>40){
        printf("Voce esta com Obesidade Grau III(morbida)");
    }

    else{
        printf("Valor invalido");
    }

    return 0;
}

