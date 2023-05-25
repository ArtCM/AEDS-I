#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char caracter[3];
    int i=0;
    int j=0;
    
    printf("Insira o valor da string e um caracter para saber quantas vezes ele aparece na string.\n\n");
    
    printf("Digite o valor da string: ");
    setbuf(stdin, NULL);
    fgets(str, 20, stdin);
    
    printf("Digite o caractere: ");
    setbuf(stdin, NULL);
    fgets(caracter, 3, stdin);
    
    for(i=0;str[i]!='\n';i++){
        if(str[i]==caracter[0]){
            j++;           
        }
    }

    printf("\nO caractere se repete dentro da string %i vezes.", j);
    
    return 0;
}
