#include <stdio.h>

int main()
{
    int A[5], B[5], produtoes, i;
    
    printf("Digite o valor de 5 elementos de cada matriz para saber o produto escalar delas.");
    
    printf("\n\nDigite os 5 valores da matriz A:\n");
    
    for(i=0; i<=4;  i++){
        scanf("%i", &A[i]);
    }
    
    i=0;
    
    printf("\nAgora digite os 5 valores de B:\n");
    
    for(i=0; i<=4;  i++){
        scanf("%i", &B[i]);
    }
    
    i=0;
    produtoes=0;
    
    for(i=0; i<=4;  i++){
        produtoes = produtoes + (A[i]*B[i]);
    }
    
    printf("\nO produto escalar de A por B e: %i", produtoes);

    return 0;
}
