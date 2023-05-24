#include <stdio.h>

int main()
{
    int i;
    float arjA[5], arjB[5];
    
    printf("Insira 5 valores para armazena-los em um arranjo e em seguida transferir o triplo deles para outro arranjo.\n\n");
    
    for(i=0; i<=4; i++){
        printf("Digite o valor: ");
        scanf("%f", &arjA[i]);
    }
    
    
    for(i=4; i>=0; i--){
        arjB[i] = arjA[i] * 3;
    }
    
    printf("\nOs elementos do primeiro arranjo sao: \n");
    for(i=0; i<=4; i++){
        printf("%.0f ", arjA[i]);
    }
    
    i=0;
    
    printf("\n\nOs elementos do segundo arranjo sao: \n");
    for(i=0; i<=4; i++){
        printf("%.0f ", arjB[i]);
    }

    return 0;
}
