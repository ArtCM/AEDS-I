#include <stdio.h>

int main(){
    int table[4][5], i=0, j=0, soma[4], somatotal; 
    
    printf("Digite os valores inteiros de uma tabela 4x5, para saber a soma de cada linha e a soma de todos os elementos\n\n");
    
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("Digite o elemento da linha %i coluna %i: ", i, j);
            scanf("%i", &table[i][j]);
        }
    }
    
    i=0;
    j=0;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            soma[i]+=table[i][j];
        }
    }
    
    i=0;
    j=0;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            somatotal+=table[i][j];
        }
    }
    
    i=0;

    for(i=0;i<4;i++){
        printf("A soma da linha %i e: %i\n", i, soma[i]);
    }
    
    printf("A soma de todos os elementos e: %i", somatotal);

    return 0;
}
