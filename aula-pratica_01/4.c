#include <stdio.h>

int main(){

    int a, b, resto;

    printf("Insira os valores de a e b na expressão (b 3 + ab)-2b + a mod b para obter seu resultado. (Somente numeros inteiros)\n\n");
    printf("a:");
    scanf("%i", &a);
    printf("b:");
    scanf("%i", &b);

    resto = ((b*b*b) + a*b)-(2*b) + (a % b);

    printf ("\nO valor da expressao e: %i", resto);

return 0;

}