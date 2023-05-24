#include <stdio.h>

int main(){
    int table[4][4], i=0, j=0, z=0, null_col=0, null_line=0; 
    
    printf("Digite os valores inteiros de uma tabela 4x4, para saber quantas colunas e linhas nulas a tabela possui.\n\n");
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o elemento da linha %i coluna %i: ", i, j);
            scanf("%i", &table[i][j]);
        }
    }
    
    
    //Verifica o numero de linhas nulas
    for(i=0;i<4;i++){
        z=0;
        for(j=0;j<4;j++){
            if(table[i][j]==0){
                z++;
            }
        }
        if(z==4){
            null_line++;
        }
    }
    
    
    //Verifica o numero de colunas nulas
    for(i=0;i<4;i++){
        z=0;
        for(j=0;j<4;j++){
            if(table[j][i]==0){
                z++;
            }
        }
        if(z==4){
            null_col++;
            z=0;
        }
    }    
    
    printf("\nEssa matriz tem %i linha(s) nulas\n", null_line);
    printf("Essa matriz tem %i coluna(s) nulas", null_col);

    return 0;
}
