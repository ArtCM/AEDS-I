#include <stdio.h>

int main(){
    int table[4][4], i=0, j=0; 
    
    printf("Digite os valores inteiros de uma tabela 4x4, para saber os elementos da diagonal da esquerda para direita.\n\n");
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o elemento da linha %i coluna %i: ", i, j);
            scanf("%i", &table[i][j]);
        }
    }
    
    printf("\nOs elementos da diagonal sao: ");
    for(i=0;i<4;i++){
            printf("%i ", table[i][i]);
    }

    return 0;
}
