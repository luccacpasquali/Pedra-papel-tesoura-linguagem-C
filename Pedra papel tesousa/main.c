#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ATENCAO jogue apenas: pedra, papel ou tesoura!\n");

    char player1[256];
    char player2[256];

    printf("Player 1, sua vez...\n");
    scanf("%s",&player1);

    printf("Player 2, sua vez...\n");
    scanf("%s",&player2);


    printf("\nCalculando resultado, Aguarde...\n");
    if(strcmp(player1,"papel") == 0){

        if(strcmp(player2,"papel") == 0){
                printf("\nA batalha foi tão leve que empatou\n");
        }else if(strcmp(player2,"pedra") == 0){
                printf("\nPlayer 1 imobilizou o Player 2 e garantiu a vitoria\n");
        }else if(strcmp(player2,"tesoura") == 0){
                printf("\nPlayer 2 com facilidade despedacou o Player 1 e levou a vitoria\n");
        }else{
                printf("\nO Player 2 jogou uma informacao invalida\n ");
        }
    }else if(strcmp(player1,"pedra") == 0){

        if(strcmp(player2,"papel") == 0){
                printf("\nPlayer 2 imobilizou o Player 1 e garantiu a vitoria\n");
        }else if(strcmp(player2,"pedra") == 0){
                printf("\nA batalha foi dura mas terminiu em empate\n");
        }else if(strcmp(player2,"tesoura") == 0){
                printf("\nPlayer 1 amassaou o Player 2 e levou a vitoria pra casa\n");
        }else{
                printf("\nO Player 2 jogou uma informacao invalida\n ");
        }
    }else if(strcmp(player1,"tesoura") == 0){

        if(strcmp(player2,"papel") == 0){
                printf("\nPlayer 1 com facilidade despedacou o Player 2 e levou a vitoria\n");
        }else if(strcmp(player2,"pedra") == 0){
                printf("\nPlayer 2 amassaou o Player 1 e levou a vitoria pra casa\n");
        }else if(strcmp(player2,"tesoura") == 0){
                printf("\nA batalha foi afiada e terminiu em empate\n");
        }else{
                printf("\nO Player 2 jogou uma informacao invalida\n ");
        }
    }else{
        printf("Voce jogou um valor invalido :(");
    }


    return 0;
}
