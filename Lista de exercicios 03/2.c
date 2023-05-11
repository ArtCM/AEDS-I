#include <stdio.h>

int main(){
    int i, A[6];
    
    printf("Digite seis valores inteiros: \n");
    
    for(i=0; i<=5; i++){
        scanf("%i", &A[i]);
    }
    
    printf("\nOs valores digitados sao: ");
    
    for(i=0; i<=5; i++){
        printf("%i ", A[i]);
    }

    

    return 0;
}
