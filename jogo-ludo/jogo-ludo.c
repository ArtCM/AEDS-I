
/*--------------------------------------------------
        Desenvolvido por Arthur Correa Marques

    para o trabalho prático da disciplina AEDS I
!! O jogo utiliza a biblíoteca do windows, logo é !!
!! necessário tela para utiliza-lo, é recomendado !!
!! roda-lo atravês do codeblocks.                 !!

---------------------------------------------------*/

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
#define MAGENTA "\e[45;35m"
#define CYANO "\e[46;36m"

//CORES DE TEXTO
#define BALCK_T "\e[0;30m"
#define RED_T "\e[0;31m"
#define GREEN_T "\e[0;32m"
#define YELLOW_T "\e[0;33m"
#define BLUE_T "\e[0;34m"
#define WHITE_T "\e[0;37m"

//CORES FUNDO
//Preto
#define BLACK_F "\e[0;40m"
//Vermelho
#define RED_F "\e[41m"
//Verde
#define GREEN_F "\e[42m"
//Amarelo
#define YELLOW_F "\e[43m"
//Azul
#define BLUE_F "\e[44m"
//Magenta
#define MAGENTA_F "\e[45m"
//Cyano
#define CYANO_F "\e[46m"
//Branco
#define WHITE_F "\e[47m"

//-------------------------------STRUCTS-------------------------------------

struct player{
    int one;
    int two;
    int tree;
    int four;
};

//-------------------------------FUNÇÕES-------------------------------------

//Alterar cor
int changecolor(int color){
    int color_bk = color;
    printf("Digite a cor que deseja atribuir a ele:\n");
    printf("\n-------------------------------------------\n");
    printf("\n1- Azul           4- Amarelo");
    printf("\n2- Verde          5- Vermelho");
    printf("\n3- Ciano          6- Magenta");
    printf("\n0- Voltar");
    printf("\n\n-------------------------------------------");
    printf("\n\nCor: ");
    scanf("%i", &color);

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
        return color_bk;
    }

    else{
        printf("\nCor invalida.");
        sleep(3);
        return color_bk;
    }
}

// Tela Inicial
int tela_inicial(int op){
    printf("________________________________________________________________\n");
    printf("|             _      _   _   _ _     _____                     |\n");
    printf("|            | |    | | | | |  _ |  |  _  |                    |\n");
    printf("|            | |__  | |_| | | |_| | | |_| |                    |\n");
    printf("|            |____| |_____| |____/  |_____|                    |\n");
    printf("|                                                              |\n");
    printf("|                                                              |\n");
    printf("|                                                              |\n");
    printf("|                    1 - Start Game                            |\n");
    printf("|                                                              |\n");
    printf("|                    2 - Configuracoes                         |\n");
    printf("|                                                              |\n");
    printf("|                    0 - Exit                                  |\n");
    printf("|                                                              |\n");
    printf("|                                                              |\n");
    printf("|   !! Utilize numeros para jogar e selecionar uma opcao !!    |\n");
    printf("|______________________________________________________________|\n");
    printf("\n\nDigite uma opcao: ");
    scanf("%i", &op);

    if(op>2 || op<0){
        printf("\nOpcao invalida");
        sleep(3);
    }

    return op;
}

// Rodar dado
int roda_dado(int dados){
    do{
        srand(time(NULL));
        dados = rand()%7;
    }
    while(dados==0);
    printf("Voce tirou no dado o numero: %i\n", dados);

    return dados;
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
    int color_backup=0;
    int dado;
    int rodada=0;
    int players=4;
    char vez='T';
    int lopx=0, lopy=0;

    int playerbkp=0;

    int pecabkp=68;

    int score=0;

    int count=0;

    struct player x = {0,0,0,0};
    struct player y = {0,0,0,0};
    struct player w = {0,0,0,0};
    struct player z = {0,0,0,0};

    int corp1=4, corp2=2, corp3=14, corp4=1, coropc=0;
    int tabuleiro[15][15]= {60,60,60,60,60,60,11,12,13,70,70,70,70,70,70,
                            60,69,60,60,69,60,10,71,14,70,79,70,70,79,70,
                            60,60,60,60,60,60,-9,72,15,70,70,70,70,70,70,
                            60,60,60,60,60,60,-8,73,16,70,70,70,70,70,70,
                            60,69,60,60,69,60,-7,74,17,70,79,70,70,79,70,
                            60,60,60,60,60,60,-6,75,18,70,70,70,70,70,70,
                            52,-1,-2,-3,-4,-5,98,76,98,19,20,21,22,23,24,
                            51,61,62,63,64,65,66,98,86,85,84,83,82,81,25,
                            50,49,48,47,46,45,98,96,98,31,30,29,28,27,26,
                            90,90,90,90,90,90,44,95,32,80,80,80,80,80,80,
                            90,99,90,90,99,90,43,94,33,80,89,80,80,89,80,
                            90,90,90,90,90,90,42,93,34,80,80,80,80,80,80,
                            90,90,90,90,90,90,41,92,35,80,80,80,80,80,80,
                            90,99,90,90,99,90,40,91,36,80,89,80,80,89,80,
                            90,90,90,90,90,90,39,38,37,80,80,80,80,80,80};

    menuprincipal:
    opcao = tela_inicial(opcao);

    //Loop se digitado opcao invalido
    if(opcao>2 || opcao<0){
        system("cls");
        goto menuprincipal;
    };

    // GAME START
    if(opcao==1){
        do{
            system("cls");
            gamestart:
            for(repeat_line=0;repeat_line<15;repeat_line++){
                    for(repeat_col=0;repeat_col<15;repeat_col++){;
                        if (tabuleiro[repeat_line][repeat_col]==60 || (tabuleiro[repeat_line][repeat_col]>60 && tabuleiro[repeat_line][repeat_col]<67) || tabuleiro[repeat_line][repeat_col]==-1){
                            if(corp1==1){
                                printf(BLUE"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp1==2){
                                printf(GREEN"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp1==3){
                                printf(CYANO"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp1==14){
                                printf(YELLOW"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp1==4){
                                printf(RED"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp1==5){
                                printf(MAGENTA"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                        }
                        else if (tabuleiro[repeat_line][repeat_col]==70  || (tabuleiro[repeat_line][repeat_col]>70 && tabuleiro[repeat_line][repeat_col]<77) || tabuleiro[repeat_line][repeat_col]==14){
                            if(corp2==1){
                                printf(BLUE"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp2==2){
                                printf(GREEN"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp2==3){
                                printf(CYANO"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp2==14){
                                printf(YELLOW"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp2==4){
                                printf(RED"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp2==5){
                                printf(MAGENTA"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                        }
                        else if (tabuleiro[repeat_line][repeat_col]==80  || (tabuleiro[repeat_line][repeat_col]>80 && tabuleiro[repeat_line][repeat_col]<87) || tabuleiro[repeat_line][repeat_col]==27){
                            if(corp3==1){
                                printf(BLUE"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp3==2){
                                printf(GREEN"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp3==3){
                                printf(CYANO"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp3==14){
                                printf(YELLOW"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp3==4){
                                printf(RED"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp3==5){
                                printf(MAGENTA"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                        }
                        else if (tabuleiro[repeat_line][repeat_col]==90  || (tabuleiro[repeat_line][repeat_col]>90 && tabuleiro[repeat_line][repeat_col]<97) || tabuleiro[repeat_line][repeat_col]==40){
                            if(corp4==1){
                                printf(BLUE"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp4==2){
                                printf(GREEN"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp4==3){
                                printf(CYANO"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp4==14){
                                printf(YELLOW"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp4==4){
                                printf(RED"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            if(corp4==5){
                                printf(MAGENTA"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                        }
                        else if (tabuleiro[repeat_line][repeat_col]==99){
                            if(corp4==1){
                                printf(BLUE_F"XX"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp4==2){
                                printf(GREEN_F"XX"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp4==3){
                                printf(CYANO_F"XX"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp4==14){
                                printf(YELLOW_F"XX"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp4==4){
                                printf(RED_F"XX"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp4==5){
                                printf(MAGENTA_F"XX"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                        }
                        else if (tabuleiro[repeat_line][repeat_col]==89){
                            if(corp3==1){
                                printf(BLUE_F"YY"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp3==2){
                                printf(GREEN_F"YY"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp3==3){
                                printf(CYANO_F"YY"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp3==14){
                                printf(YELLOW_F"YY"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp3==4){
                                printf(RED_F"YY"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp3==5){
                                printf(MAGENTA_F"YY"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                        }
                        else if (tabuleiro[repeat_line][repeat_col]==79){
                            if(corp2==1){
                                printf(BLUE_F"WW"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp2==2){
                                printf(GREEN_F"WW"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp2==3){
                                printf(CYANO_F"WW"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp2==14){
                                printf(YELLOW_F"WW"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp2==4){
                                printf(RED_F"WW"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp2==5){
                                printf(MAGENTA_F"WW"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                        }
                        else if (tabuleiro[repeat_line][repeat_col]==69){
                            if(corp1==1){
                                printf(BLUE_F"ZZ"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp1==2){
                                printf(GREEN_F"ZZ"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp1==3){
                                printf(CYANO_F"ZZ"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp1==14){
                                printf(YELLOW_F"ZZ"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp1==4){
                                printf(RED_F"ZZ"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                            else if(corp1==5){
                                printf(MAGENTA_F"ZZ"RESET,tabuleiro[repeat_line][repeat_col]);
                            }
                        }
                        else if(tabuleiro[repeat_line][repeat_col]==98){
                            printf(BLACK"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                        }
                        else{
                            printf(WHITE"%i"RESET,tabuleiro[repeat_line][repeat_col]);
                        }
                    }
                    printf("\n");
            }
            rodada++;
            if(players==4){
                if(rodada == 5){
                    rodada=1;
                }
            }
            else if(players==3){
                if(rodada == 4){
                    rodada=1;
                }
            }
            else if(players==2){
                if (rodada == 3){
                    rodada=1;
                }
            }
            if(rodada==1){
                vez = 'Z';
            }
            if(rodada==2){
                vez = 'W';
            }
            if(rodada==3){
                vez = 'Y';
            }
            if(rodada==4){
                vez = 'X';
            }
            printf("\n-----------------------E sua vez player %c!-----------------------", vez);
            printf("\n------------------------------SCORE------------------------------");
            printf("\n\nPlayer Z          ");
            printf("Player W          ");
            printf("Player Y          ");
            printf("Player X          ");
            printf("\n\nZ1: %i              ", z.one);
            printf("W1: %i            ", w.one);
            printf("Y1: %i              ", y.one);
            printf("X1: %i            ", x.one);
            printf("\nZ2: %i              ", z.two);
            printf("W2: %i            ", w.two);
            printf("Y2: %i              ", y.two);
            printf("X2: %i            ", x.two);
            printf("\nZ3: %i              ", z.tree);
            printf("W3: %i            ", w.tree);
            printf("Y3: %i              ", y.tree);
            printf("X3: %i            ", x.tree);
            printf("\nZ4: %i              ", z.four);
            printf("W4: %i            ", w.four);
            printf("Y4: %i              ", y.four);
            printf("X4: %i            ", x.four);
            printf("\n\n-----------------------------------------------------------------");
            printf("\n\nDigite 1 para jogar os dados ou Digite 0 para sair.\n");
            printf("Opcao: ");
            scanf("%i", &opcao);
            if(opcao==0){
                printf("\nTem certeza de que deseja desistir da partida?\nDigite 1 para sim e 0 para nao: \n");
                scanf("%i", &opcao);
                if(opcao==0){
                    system("cls");
                    rodada--;

                    goto gamestart;
                }
                else if(opcao==1){
                    system("cls");
                    rodada=0;
                    goto menuprincipal;
                }
                else{
                    printf("Opcao invalida.");
                    sleep(3);
                    system("cls");
                    rodada--;
                    goto gamestart;
                }
            }
            else if(opcao==1){
                dado = roda_dado(dado);
                sleep(1);
                if(dado==6){
                    count++;
                    if(count<4){
                        if(rodada==1){
                            if(z.one==0){
                                z.one=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(z.one != 0 && z.two==0){
                                z.two=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(z.one != 0 && z.two!=0 && z.tree==0){
                                z.tree=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(z.one != 0 && z.two!=0 && z.tree!=0 && z.four==0){
                                z.four=1;
                                rodada--;
                                goto gamestart;
                            }
                            else{
                                score+=dado;
                                rodada--;
                                system("cls");
                                goto gamestart;
                            }
                        }
                        else if(rodada==2){
                            if(w.one==0){
                                w.one=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(w.one != 0 && w.two==0){
                                w.two=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(w.one != 0 && w.two!=0 && w.tree==0){
                                w.tree=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(w.one != 0 && w.two!=0 && w.tree!=0 && w.four==0){
                                w.four=1;
                                rodada--;
                                goto gamestart;
                            }
                            else{
                                score+=dado;
                                rodada--;
                                system("cls");
                                goto gamestart;
                            }
                        }
                        else if(rodada==3){
                            if(y.one==0){
                                y.one=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(y.one != 0 && y.two==0){
                                y.two=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(y.one != 0 && y.two!=0 && y.tree==0){
                                y.tree;
                                rodada--;
                                goto gamestart;
                            }
                            else if(y.one != 0 && y.two!=0 && y.tree!=0 && y.four==0){
                                y.four=1;
                                rodada--;
                                goto gamestart;
                            }
                            else{
                                score+=dado;
                                rodada--;
                                system("cls");
                                goto gamestart;
                            }
                        }
                        else if(rodada==4){
                            if(x.one==0){
                                x.one=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(x.one != 0 && x.two==0){
                                x.two=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(x.one != 0 && x.two!=0 && x.tree==0){
                                x.tree=1;
                                rodada--;
                                goto gamestart;
                            }
                            else if(x.one != 0 && x.two!=0 && x.tree!=0 && x.four==0){
                                x.four=1;
                                rodada--;
                                goto gamestart;
                            }
                            else{
                                score+=dado;
                                rodada--;
                                system("cls");
                                goto gamestart;
                            }
                        }

                    }
                    else{
                        count=0;
                        score=0;
                        system("cls");
                        goto gamestart;
                    }
                }
                else if(dado<6){
                    count=0;
                    if(rodada==1){
                        if(z.one!=0 && z.two==0 && z.tree==0 && z.four==0){
                            score+=dado;
                            z.one+=score;
                            score=0;
                            system("cls");
                            goto gamestart;
                        }
                        else if(z.one!=0 && z.two!=0 && z.tree==0 && z.four==0){
                            dadomenordeseisz1:
                            printf("\nEscolha com qual peao deseja andar: 1 ou 2\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                z.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                z.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisz1;
                            }
                        }
                        else if(z.one!=0 && z.two!=0 && z.tree==0 && z.four==0){
                            dadomenordeseisz2:
                            printf("\nEscolha com qual peao deseja andar: 1, 2 ou 3\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                z.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                z.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==3){
                                score+=dado;
                                z.tree+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisz2;
                            }
                        }
                        else if(z.one!=0 && z.two!=0 && z.tree!=0 && z.four!=0){
                            dadomenordeseisz3:
                            printf("\nEscolha com qual peao deseja andar: 1, 2, 3 ou 4\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                z.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                z.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==3){
                                score+=dado;
                                z.tree+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==4){
                                score+=dado;
                                z.four+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisz3;
                            }
                        }
                    }
                    else if(rodada==2){
                        if(w.one!=0 && w.two==0 && w.tree==0 && w.four==0){
                            score+=dado;
                            w.one+=score;
                            score=0;
                            system("cls");
                            goto gamestart;
                        }
                        else if(w.one!=0 && w.two!=0 && w.tree==0 && w.four==0){
                            dadomenordeseisw1:
                            printf("\nEscolha com qual peao deseja andar: 1 ou 2\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                w.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                w.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisw1;
                            }
                        }
                        else if(w.one!=0 && w.two!=0 && w.tree==0 && w.four==0){
                            dadomenordeseisw2:
                            printf("\nEscolha com qual peao deseja andar: 1, 2 ou 3\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                w.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                w.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==3){
                                score+=dado;
                                w.tree+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisw2;
                            }
                        }
                        else if(w.one!=0 && w.two!=0 && w.tree!=0 && w.four!=0){
                            dadomenordeseisw3:
                            printf("\nEscolha com qual peao deseja andar: 1, 2, 3 ou 4\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                w.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                w.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==3){
                                score+=dado;
                                w.tree+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==4){
                                score+=dado;
                                w.four+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisw3;
                            }
                        }
                    }
                    else if(rodada==3){
                        if(y.one!=0 && y.two==0 && y.tree==0 && y.four==0){
                            score+=dado;
                            y.one+=score;
                            score=0;
                            system("cls");
                            goto gamestart;
                        }
                        else if(y.one!=0 && y.two!=0 && y.tree==0 && y.four==0){
                            dadomenordeseisy1:
                            printf("\nEscolha com qual peao deseja andar: 1 ou 2\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                y.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                y.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisy1;
                            }
                        }
                        else if(y.one!=0 && y.two!=0 && y.tree==0 && y.four==0){
                            dadomenordeseisy2:
                            printf("\nEscolha com qual peao deseja andar: 1, 2 ou 3\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                y.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                y.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==3){
                                score+=dado;
                                y.tree+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisy2;
                            }
                        }
                        else if(y.one!=0 && y.two!=0 && y.tree!=0 && y.four!=0){
                            dadomenordeseisy3:
                            printf("\nEscolha com qual peao deseja andar: 1, 2, 3 ou 4\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                y.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                y.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==3){
                                score+=dado;
                                y.tree+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==4){
                                score+=dado;
                                y.four+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisy3;
                            }
                        }
                    }
                    else if(rodada==4){
                        if(x.one!=0 && x.two==0 && x.tree==0 && x.four==0){
                            score+=dado;
                            x.one+=score;
                            score=0;
                            system("cls");
                            goto gamestart;
                        }
                        else if(x.one!=0 && x.two!=0 && x.tree==0 && x.four==0){
                            dadomenordeseisx1:
                            printf("\nEscolha com qual peao deseja andar: 1 ou 2\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                x.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                x.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisx1;
                            }
                        }
                        else if(x.one!=0 && x.two!=0 && x.tree==0 && x.four==0){
                            dadomenordeseisx2:
                            printf("\nEscolha com qual peao deseja andar: 1, 2 ou 3\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                x.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                x.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==3){
                                score+=dado;
                                x.tree+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisx2;
                            }
                        }
                        else if(x.one!=0 && x.two!=0 && x.tree!=0 && x.four!=0){
                            dadomenordeseisx3:
                            printf("\nEscolha com qual peao deseja andar: 1, 2, 3 ou 4\n\nOpcao: ");
                            scanf("%i", &opcao);
                            if(opcao==1){
                                score+=dado;
                                x.one+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==2){
                                score+=dado;
                                x.two+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==3){
                                score+=dado;
                                x.tree+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else if(opcao==4){
                                score+=dado;
                                x.four+=score;
                                score=0;
                                system("cls");
                                goto gamestart;
                            }
                            else{
                                printf("\nOpcao Invalida");
                                sleep(2);
                                goto dadomenordeseisx3;
                            }
                        }
                    }
                }
                else{
                    printf("Opcao invalida.");
                    rodada--;
                    sleep(3);
                    system("cls");
                    goto gamestart;
                }
            }
        }
        while(rodada<=players);
    }

    // MENU DE CONFIGURACOES
    else if(opcao==2){
        menuconfiguracoes:
        system("cls");
        printf("--------------------------------------------------------------------\n");
        printf("---------------------------CONFIGURACOES----------------------------\n");
        printf("--------------------------------------------------------------------\n");
        printf("\n\n                1- Alterar numero de players");
        printf("\n\n                2- Alterar cores");
        printf("\n\n\n\n*Digite 0 para voltar");
        printf("\n\n--------------------------------------------------------------------\n");
        printf("Opcao: ");
        scanf("%i", &opcao);
        if(opcao==1){
            menuplayers:
            system("cls");
            playerbkp = players;
            printf("--------------------------------------------------------------------\n");
            printf("-------------------------NUMERO DE PLAYERS--------------------------\n");
            printf("--------------------------------------------------------------------\n");
            printf("\n                  O numero atual de players e: %i", players);
            printf("\n\n        Digite o numero de players que irao jogar (min 2 | max 4)");
            printf("\n\n\n\n*Digite 0 para voltar");
            printf("\n\n--------------------------------------------------------------------\n");
            printf("\nPlayers: ");
            scanf("%i", &players);
            if(players==0){
                players=playerbkp;
                goto menuconfiguracoes;
            }
            else if(players==2 || players==3 || players==4){
                printf("\nVoce alterou o numero de players para %i", players);
                sleep(2);
                goto menuplayers;
            }
            else{
                printf("\nOpcao invalida");
                players=playerbkp;
                sleep(3);
                goto menuplayers;
            }

        }

        if(opcao==2){
            menudecores:
            system("cls");
            coropc = 0;
            printf("--------------------------------------------------------------------\n");
            printf("----------------------------ALTERAR COR-----------------------------\n");
            printf("--------------------------------------------------------------------\n");
            printf("\nDigite o player que deseja alterar a cor:");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), corp1);
            printf("\n\n1- Player Z");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), corp2);
            printf("         2- Player W");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), corp3);
            printf("\n\n3- Player Y");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), corp4);
            printf("         4- Player X");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            printf("\n\n\n*Digite 0 para voltar");
            printf("\n\n--------------------------------------------------------------------\n");
            printf("\nPlayer: ");
            scanf("%i", &coropc);

            if(coropc==1){
                color_backup = corp1;
                corp1 = changecolor(corp1);
                if(corp1==corp2 || corp1==corp3 || corp1==corp4){
                    printf("\nOutro jogador ja utiliza essa cor.");
                    sleep(2);
                     corp1=color_backup;
                }
                system("cls");
                goto menudecores;
            }

            else if(coropc==2){
                color_backup = corp2;
                corp2 = changecolor(corp2);
                if(corp2==corp1 || corp2==corp3 || corp2==corp4){
                    printf("\nOutro jogador ja utiliza essa cor.");
                    sleep(2);
                     corp2=color_backup;
                }
                system("cls");
                goto menudecores;
            }

            else if(coropc==3){
                color_backup = corp3;
                corp3 = changecolor(corp3);
                if(corp3==corp2 || corp3==corp1 || corp3==corp4){
                    printf("\nOutro jogador ja utiliza essa cor.");
                    sleep(2);
                    corp3=color_backup;
                }
                system("cls");
                goto menudecores;
            }

            else if(coropc==4){
                color_backup = corp4;
                corp4 = changecolor(corp4);
                if(corp4==corp2 || corp4==corp3 || corp4==corp1){
                    printf("\nOutro jogador ja utiliza essa cor.");
                    sleep(2);
                    corp4=color_backup;
                }
                system("cls");
                goto menudecores;
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
                goto menudecores;
            }
        }
        else if(opcao==0){
            system("cls");
            goto menuprincipal;
        }
        else{
            printf("\nOpcao invalida");
            sleep(3);
            system("cls");
            goto menuconfiguracoes;
        }
    }

    //EXIT
    else if(opcao==0){
        printf("\nObrigado por jogar!\n");
        exit(0);
    }

    return 0;
}
