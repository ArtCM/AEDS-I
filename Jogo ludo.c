#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <windows.h>

//CORES TOTAL
#define RESET "\e[0m"
#define RED "\e[41;31m"
#define GREEN "\e[42;32m"
#define YELLOW "\e[43;33m"
#define BLUE "\e[44;34m"
#define WHITE "\e[47;37m"
#define BLACK "\e[40;30m"
#define PURPLE "\e[45;35m"

//CORES FUNDO
#define BLACK_F "\e[0;40m"
#define RED_F "\e[41m"
#define GREEN_F "\e[42m"
#define YELLOW_F "\e[43m"
#define BLUE_F "\e[44m"
#define MAGENTA_F "\e[45m"
#define CYANO_F "\e[46m"
#define WHITE_F "\e[47m"

//-------------------------------FUNÇÕES-------------------------------------

//Alterar cor
int changecolor(int color,int colorz,int colorx,int colory){
    int color_backup = color;
    printf("Digite a cor que deseja atribuir a ele:\n");
    printf("\n-------------------------------------------\n");
    printf("\n1- Azul           4- Amarelo");
    printf("\n2- Verde          5- Vermelho");
    printf("\n3- Ciano          6- Magenta");
    printf("\n0- Voltar");
    printf("\n\n-------------------------------------------");
    printf("\n\nCor: ");
    scanf("%i", &color);
    if(color != colorz && color != colorx && color != colory){
        if(color == 1){
            color = 1;
            return color;
        }
        else if(color == 2){
            color = 2;
            return color;
        }
        else if(color == 3){
            color = 3;
            return color;
        }
        else if(color == 4){
            color = 14;
            return color;
        }
        else if(color == 5){
            color = 4;
            return color;
        }
        else if(color == 6){
            color = 5;
            return color;
        }

        else if(color==0){
            return color_backup;
        }

        else{
            printf("\nCor invalida.");
            sleep(3);
            return color_backup;
        }
    }
    else{
        printf("\nOutro jogador ja utiliza essa cor.");
        sleep(2);
        return color_backup;
    }
}

// Tela Inicial
int tela_inicial(int op){
    printf("________________________________________________________________\n");
    printf( WHITE_F"|             _      _   _   _ _     _____                     |\n"RESET);
    printf("|            | |    | | | | |  _ |  |  _  |                    |\n");
    printf("|            | |__  | |_| | | |_| | | |_| |                    |\n");
    printf("|            |____| |_____| |____/  |_____|                    |\n");
    printf("|                                                              |\n");
    printf("|                                                              |\n");
    printf("|                                                              |\n");
    printf("|                    1 - Start Game                            |\n");
    printf("|                                                              |\n");
    printf("|                    2 - Alterar cores                         |\n");
    printf("|                                                              |\n");
    printf("|                    3 - Exit                                  |\n");
    printf("|                                                              |\n");
    printf("|                                                              |\n");
    printf("|   !! Utilize numeros para jogar e selecionar uma opcao !!    |\n");
    printf("|______________________________________________________________|\n");
    printf("\n\nDigite uma opcao: ");
    scanf("%i", &op);

    if(op>3 || op<1){
        printf("\nOpcao invalida");
        sleep(3);
    }

    return op;
}

//Tabuleiro
int loop_tabuleiro(int tab[15][15]){
    int lp1=0;
    int lp2=0;

    for(lp1=0;lp1<15;lp1++){
        for(lp2=0;lp2<15;lp2++){
            printf("%i",tab[lp2][lp1]);
        }
        printf("\n");
    }
}
//-----------------------------------------------------------------------------------

//Principal
int main(){
    int opcao=0;
    int repeat_col=0, repeat_line=0;

    int corp1=4, corp2=2, corp3=14, corp4=1, coropc=0;
    char tabuleiro[31][31];

    menuprincipal:
    opcao = tela_inicial(opcao);

    //Loop se digitado opcao invalido
    if(opcao>3 || opcao<1){
        system("cls");
        goto menuprincipal;
    };

    // GAME START
    if(opcao==1){
        system("cls");
        for(repeat_line=0;repeat_line<11;repeat_line++){
                for(repeat_col=0;repeat_col<12;repeat_col++){
                    tabuleiro[repeat_line][repeat_col] = ' ';
                    printf(RED_F"%c",tabuleiro[repeat_line][repeat_col], RESET);
                }
                printf("\n");
        }

    }

    // MENU DE CONFIGURACOES
    else if(opcao==2){
        menuconfiguracoes:
        system("cls");
        coropc = 3;
        printf("Digite o player que deseja alterar a cor:");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), corp1);
        printf("\n\n1- Player 1");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), corp2);
        printf("         2- Player 2");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), corp3);
        printf("\n\n3- Player 3");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), corp4);
        printf("         4- Player 4");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        printf("\n\n*Digite 0 para voltar.\n\nPlayer: ");
        scanf("%i", &coropc);

        if(coropc==1){
            corp1 = changecolor(corp1, corp2, corp3, corp4);
            system("cls");
            goto menuconfiguracoes;
        }

        else if(coropc==2){
            corp2 = changecolor(corp2, corp1, corp3, corp4);
            system("cls");
            goto menuconfiguracoes;
        }
        else if(coropc==3){
            corp3 = changecolor(corp3, corp1, corp2, corp4);
            system("cls");
            goto menuconfiguracoes;
        }
        else if(coropc==4){
            corp4 = changecolor(corp4, corp1, corp3, corp2);
            system("cls");
            goto menuconfiguracoes;
        }
        else if(coropc==0){
            system("cls");
            goto menuprincipal;
        }
        else{
            printf("\nPlayer invalido");
            sleep(3);
            coropc=0;
            system("cls");
            goto menuconfiguracoes;
        }

    }

    //EXIT
    else if(opcao==3){
        printf("\nObrigado por jogar!\n");
        exit(0);
    }

    return 0;
}
