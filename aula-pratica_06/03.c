#include <stdio.h>
#include <string.h>

int main()
{
    char strA[20];
    char strB[20];
    int n=0;
    int i=0;
    int j=0;
    
    printf("Insira o valor n para comparar duas strings, onde n e o numero de elementos que serao comparados.\n\n");
    
    printf("Digite o valor da primeira string: ");
    setbuf(stdin, NULL);
    fgets(strA, 20, stdin);
    
    printf("Digite o valor da segunda string: ");
    setbuf(stdin, NULL);
    fgets(strB, 20, stdin);
    
    printf("\nDigite o valor de n: ");
    scanf("%i", &n);
    
    for(i=0;i<n;i++){
        if(strA[i]==strB[i]){
            j++;           
        }
    }
    
    if(j==n){
        printf("0");
    }
    
    else{
        printf("-1");
    }
}
