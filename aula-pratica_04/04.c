#include <stdio.h>

int main(){
    
    int A[5];
    int i, maior, menor, media = 0;
    
    printf("Digite 5 valores inteiros para armazena-los em um arranjo e obter o maior, o menor valor e suas respectivas medias.\n\n");
    
    for(i=0;i<5;i++){
        printf("Digite o %i valor: ", ++i);
        i--;
        scanf("%i", &A[i]);

    }
    
    maior = A[0];
    menor = A[0];
    
    i=0;
    for(i=0;i<5;i++){
        if(maior<A[i]){
            maior = A[i];
        }
    }
    
    i=0;
    for(i=0;i<5;i++){
        if(menor>A[i]){
            menor = A[i];
        }
    }
    
    i=0;
    for(i=0;i<5;i++){
        media += A[i];
    }
    
    media/=5;
    
    printf("\nOs valores digitados foram:\n");
    i=0;
    for(i=0;i<5;i++){
        printf("%i", A[i]);
    }
    
    printf("\nO maior valor e: ");
    printf("%i", maior);
    
    printf("\nO menor valor e: ");
    printf("%i", menor);
    
    printf("\nA media dos valores e: ");
    printf("%i", media);

    return 0;
}
