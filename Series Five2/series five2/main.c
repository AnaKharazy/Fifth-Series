#include <stdio.h>

void main() {
    char player1[10], player2[10];
    int in1, in2, answer, winner;
    int p1mark = 0;
    int p2mark = 0;
    printf("HELLO, WELCOME TO ROCK, PAPER, TWEEZERS GAME\nWhat is the name of the first player?\n");
    scanf("%s", &player1);
    printf("What is the name of the second player?\n");
    scanf("%s", &player2);

    printf("%s and %s please follow the rules of the game\nPress 1 for stone\nPress 2 for paper\nPress 3 for tweezers\n\n",
           player1, player2);
    printf("let's start the game\n");

    printf("%s is it STONE 1, PAPER 2 OR TWEEZERS 3\n", player1);
    scanf("%d", &in1);
    printf("%s is it STONE 1, PAPER 2 OR TWEEZERS 3\n", player2);
    scanf("%d", &in2);

    if ((in1 == 1 && in2 == 1) || (in1 == 2 && in2 == 2) || (in1 == 3 && in2 == 3)) {
        printf(" the game is equal", player1, player2);

    } else if ((in1 == 1 && in2 == 3) || (in1 == 3 && in2 == 2) || (in1 == 1 && in2 == 3) || (in1 == 2 && in2 == 1) ||
               (in1 == 3 && in2 == 2) || (in1 == 1 && in2 == 3)) {
        printf(" %s! You won!!!!", player1);
        winner = 1;

    } else if ((in1 == 1 && in2 == 2) || (in1 == 3 && in2 == 1) || (in1 == 1 && in2 == 2) || (in1 == 2 && in2 == 3)) {
        printf(" %s! You won!!!!", player2);
        winner = 2;
    }

    if (winner == 1) {
        printf("\n 1) continue\n");
        printf("\n 2) finish the game\n");

        printf("enter your selection %s: ", player1);
        scanf("%d", &answer);

        switch (answer) {
            case 1:
                printf("\n the game will continue.");
                break;
            case 2:
                printf("\n game over");
                break;
        }

    } else if (winner == 2) {
        printf("\n 1) continue.\n ");
        printf("\n 2) finish the game.\n ");

        printf("enter your selection %s: \n", player2);
        scanf("%d", &answer);

        switch (answer) {
            case 1:
                printf("the game will continue.\n");
                break;
            case 2:
                printf("game over\n");
                break;
        }
    }

    if (answer == 1) {
        while ((p1mark <= 3) || (p2mark <= 3)) {
            printf("%s is it STONE 1, PAPER 2 OR TWEEZERS 3\n", player1);
            scanf("%d", &in1);
            printf("%s is it STONE 1, PAPER 2 OR TWEEZERS 3\n", player2);
            scanf("%d", &in2);

            if ((in1 == 1 && in2 == 1) || (in1 == 2 && in2 == 2) || (in1 == 3 && in2 == 3)) {
                printf(" the game is equal", player1, player2);

            } else if ((in1 == 1 && in2 == 3) || (in1 == 3 && in2 == 2) || (in1 == 1 && in2 == 3) ||
                       (in1 == 2 && in2 == 1) || (in1 == 3 && in2 == 2) || (in1 == 1 && in2 == 3)) {
                printf(" %s! You won!!!!", player1);
                p1mark++;


            } else if ((in1 == 1 && in2 == 2) || (in1 == 3 && in2 == 1) || (in1 == 1 && in2 == 2) ||
                       (in1 == 2 && in2 == 3)) {
                printf(" %s! You won!!!!", player2);
                p2mark++;

            }

            if ((p1mark == 3) || (p2mark == 3)) {
                break;
            }
        }
    }

    printf("\n\n %s mark is %d and %s mark is %d .", player1, p1mark, player2, p2mark);
}


