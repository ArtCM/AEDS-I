#include <stdio.h>

int main(){

    float fahren, conversor;

    printf ("\nOla usuario, digite a temperatura em Fahrenheit para converte-la em Celsius");
    printf ("\n\nTemperatura em Fahrenheit: ");
    scanf ("%f", &fahren);
    
    conversor = 5.0 * (fahren - 32.0) / 9.0;

    printf ("\n\nA temperatura e: %.1fC", conversor);

return 0;

}