#include <stdio.h>

int main(){
    int i, j, A[10], B[10];
    
    printf("Digite dez valores reais para saber o quadrado deles: \n");
    
    for(i=0; i<10; i++){
        scanf("%i", &A[i]);
        B[i] = A[i] * A[i];
    }
    
    printf("\nOs valores digitados ao quadrado sao: ");
    
    for(j=0; j<10; j++){
        printf("%i ", B[j]);
    }

    

    return 0;
}
