#include <stdio.h>

int main(){

    float raio, area, peri;

    printf("\nDigite o raio do circulo para saber sua area e perimetro: ");
    scanf ("%f", &raio);

    area = 3.14 * (raio * raio);

    peri = (2*3.14) * raio;

    printf("\nA area do circulo e: %.2f \n\nO perimetro do circulo e: %.2f \n", area, peri);

return 0;

}