#include <stdio.h>

int main(){
    int tableA[3][3], tableB[3][3], table_soma[3][3];
    int i=0, j=0, z=0; 
    
    printf("Digite os valores inteiros de duas tabelas 3x3, para multiplicalas. \n\n");
    
    //Recebendo os valores da matriz A
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o elemento da primeira tabela, linha %i coluna %i: ", i, j);
            scanf("%i", &tableA[i][j]);
        }
    }
    
    //Recebendo os valores da matriz B
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o elemento da segunda tabela, linha %i coluna %i: ", i, j);
            scanf("%i", &tableB[i][j]);
        }
    }
    
    //Multiplicacao das matrizes
    for(z=0;z<3;z++){
        for(i=0;i<3;i++){
            table_soma[z][i] = 0;
            for(j=0;j<3;j++){
                table_soma[z][i] = table_soma[z][i] + (tableA[z][j] * tableB[j][i]);
            }
        }
    }
    
    printf("\nO resultado da multiplicacao das matrizes e: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i ", table_soma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
