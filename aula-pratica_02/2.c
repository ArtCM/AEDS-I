#include <stdio.h>

int main(){

    int user, pss;

    printf("--------------------------------------------\n\n                   Login");
    printf("\n          Usuario: ");
    scanf("%d", &user);

    printf("          Senha: ");
    scanf("%d", &pss);

    if(user == 675483){

        if(pss == 67453){
            printf("        \nLogin sucess");
        }

        else{
            printf("\n       Senha incorreta");
        }
    }


    else if (user == 145627){

        if(pss == 89234){
            printf("\n       Login sucess");
        }

        else{
            printf("\n       Senha incorreta");
        }
    }



    else if(user == 98782){

        if(pss == 89132){
            printf("\n       Login sucess");
        }

        else{
            printf("\n       Senha incorreta");
        }
    }

    else{
        printf("\n       Usuario incorreto");
    }

    return 0;
}
