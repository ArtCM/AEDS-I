#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma(int a, int b, int c, char letter[2]){
    int resultado;
    
    if(letter[0]=='A'){
        resultado = (a+b+c)/3;
    }
    
    else if(letter[0]=='P'){
        resultado = ((a*5)+(b*3)+(c*2))/3;
    }
    
    else{
        printf("opcao invalida, o resultado nao sera conclusivo");
    }
    
    return resultado;
}

int main()
{
    int n1, n2, n3, result=0;
    char O[2];
    
    printf("Insira as 3 notas de um aluno e escolha entre A para calcular a media aritmetica ou P para calcular a media ponderada");
    
    printf("\n\nDigite a primeira nota: ");
    scanf("%i", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%i", &n2);
    
    printf("Digite a terceira nota: ");
    scanf("%i", &n3);
    
    printf("\nEscolha a opcao de media (A/P): ");
    setbuf(stdin, NULL);
    fgets(O, 2, stdin);
    
    result = soma(n1, n2, n3, O);
    
    printf("\nO resultado e: %i", result);

    return 0;
}
