#include <stdio.h>

int main()
{
    float x, y;

    printf("Digite o valor de x para calcular f(x):\n\n");

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    y = x;

    // Calculando h(x)
    x = (x*x) + (3*x) - 20;

    // Calculando g(x)
    if(x <= 5){
        x = 5;
    }

    else{
        x=x;
    }

    // Calculando f(x)
    if(x <= 10){
        y = 10;
    }

    else{
        y = y + (2 * (y * y));
    }

    printf("O valor de f(x) e: %.2f", y);


    return 0;
}
