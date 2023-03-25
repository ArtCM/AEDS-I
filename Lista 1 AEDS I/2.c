#include <stdio.h>

int main(){

    float cel, conversor;

    printf ("\nOla usuario, digite a temperatura em Celsius para converte-la em Fahrenheit");
    printf ("\n\nTemperatura em Celsius: ");
    scanf ("%f", &cel);
    
    conversor = (cel* (9.0/5.0)) + 32.0;

    printf ("\n\nA temperatura e: %.1fF", conversor);

return 0;

}