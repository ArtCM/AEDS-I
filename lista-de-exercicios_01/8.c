#include <stdio.h>

int main(){

    float nota1, nota2, media;

    printf("Digite duas notas de um aluno para saber a media");

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    if((nota1>0 && nota1<10)&&(nota2>0&&nota2<10)){
        printf("As notas sao validas e a media e: %.2f", media);
    }

    else{
        printf("Nota(s) invalidas");
    }


}
