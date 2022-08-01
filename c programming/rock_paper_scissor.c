#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

int RockPaperScissors(char Name[])
{
    int i = 1, count = 0;
    int randomValue;
    int options, a, b = 0;
    int point1 = 0, point2 = 0;

    while (i < 4)
    {
        printf("\n\nRound %d\n", i);
        printf("Player1: %s\n", Name);
        printf("Choose: Rock(1) OR Paper(2) OR Scissors(3): \n");
        scanf("%d", &options);
        printf("Player2: Computer\n");
        printf("Choose: Rock(1) OR Paper(2) OR Scissors(3): \n");
        srand(time(NULL));
        randomValue = (rand() % 3 + 1);
        printf("%d", randomValue);

        if (options == 1) // 1 rock
        {
            if (randomValue == 2)
            {
                printf("\nComputer wins.\n");
                a = 0; // a for player 1, b for comp
                b = 1;
            }
            else if (randomValue == 3)
            {
                printf("\nYou win.\n");
                a = 1;
                b = 0;
            }
            else
            {
                printf("\nIt's a tie.\n");
                a = 0;
                b = 0;
            }
        }
        else if (options == 2) // 2 = paper
        {
            if (randomValue == 1)
            {
                printf("\nYou win.\n");
                a = 1;
                b = 0;
            }
            else if (randomValue == 3)
            {
                printf("\nComputer wins.\n");
                a = 0;
                b = 1;
            }
            else
            {
                printf("\nIt's a tie.\n");
                a = 0;
                b = 0;
            }
        }
        else if (options == 3) // scissors
        {
            if (randomValue == 1)
            {
                printf("\nComputer wins.\n");
                a = 0;
                b = 1;
            }
            else if (randomValue == 2)
            {
                printf("\nYou win.\n");
                a = 1;
                b = 0;
            }
            else
            {
                printf("\nIt's a tie.\n");
                a = 0;
                b = 0;
            }
        }
        point1 = point1 + a; // 0
        point2 = point2 + b; // 1
        i++;
    }
    printf("\nThe result is.........\n");
    usleep(500000);
    if (point1 > point2)
    {
        printf("Player 1: %s is the Winner\a\n", Name);
    }
    else if (point1 < point2)
    {
        printf("You lose. Better luck next time:)\n");
    }
    else
    {
        printf("It's a tie.");
    }
    return 0;
}

int main()
{
    char name[20];
    int game;
    printf("\nEnter the name of the player: ");
    scanf("%s", &name);
    getchar();
    printf("*********\tAre you ready to play game?\t*********\n *********\t\'2 for YES \' OR \'1 for NO\'\t*********\n");
    scanf("%d", &game);

    switch (game)
    {
    case 1:
        printf("Exiting the game.....");
        usleep(500000);
        break;
    case 2:
        printf("Loading.........\n");
        usleep(500000);
        printf("\nEnter 1 for Rock, 2 for Paper and 3 for Scissors");
        RockPaperScissors(name);
        break;
    default:
        break;
    }
    return 0;
}