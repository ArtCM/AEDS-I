#include <stdio.h>
#include <string.h>

int main()
{
    char strA[20];
    char strB[20];
    int i=0;
    int j=0;
    
    printf("Insira o valor de duas strings para concatenalas e imprimir o numero de caracteres e a primeira e ultima letra.\n\n");
    
    printf("Digite o valor da primeira string: ");
    setbuf(stdin, NULL);
    fgets(strA, 20, stdin);
    
    printf("Digite o valor da segunda string: ");
    setbuf(stdin, NULL);
    fgets(strB, 20, stdin);
    
    strcat(strA,strB);
    printf("\nA concatenacao das strings e:\n%s", strA);
    
    
    for(i=0;strA[i]!='\0';i++){
        j++;
    }
    
    j-=2;

    printf("\nA string possui %i caracteres", j);
    printf("\nA primeira letra da string e: %c", strA[0]);
    printf("\nA ultima letra da string e: %c", strA[j]);
    
    return 0;
}
