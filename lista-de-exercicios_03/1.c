#include <stdio.h>

int main(){
    int i, soma, A[6] = {1,0,5,-2,-5,7};
    
    soma = A[0] + A[1] + A[5];
    
    A[4] = 100;
    
    printf("O valor da soma das variaveis A[0] A[1] e A[5] e: %i\n\n", soma);
    
    printf("Os valores do vetor A são: ");
    
    for(i=0; i<=5; i++){
        printf("%i ", A[i]);
    }

    

    return 0;
}
