#include <stdio.h>
#include <string.h>

int main()
{
    char strA[20];
    char strB[20];
    int i=0;
    int jA=0;
    int jB=0;
    
    printf("Insira o valor de duas strings para imprimir a maior entre elas e concatena-las.\n\n");
    
    printf("Digite o valor da primeira string: ");
    setbuf(stdin, NULL);
    fgets(strA, 20, stdin);
    
    printf("Digite o valor da segunda string: ");
    setbuf(stdin, NULL);
    fgets(strB, 20, stdin);
    
    if(strcmp(strA,strB) == 0){
        printf("\nStrings iguais");
    }
    
    else{
        for(i=0;strA[i]!='\0';i++){
            jA++;
        }
        
        for(i=0;strB[i]!='\0';i++){
            jB++;
        }
        
        if(jB>jA){
            printf("\nA maior string e: %s", strB);
        }
        else if(jA>jB){
            printf("\nA maior string e: %s", strA);
        }
        
        strcat(strA,strB);
        printf("\nA concatenacao das duas strings e: \n%s", strA);
    }
    

    return 0;
}
