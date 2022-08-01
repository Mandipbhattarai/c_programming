// Create Rock, Paper & Scissors Game
//  Player 1: rock
//  Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int greater(char char1, char char2)
{
    // for rock papers scissors returns 1 if c1>c2 and 0 otherwise.if c1== c2 it will return -1.
    if (char1 == char2)
    {
        return -1;
    }

    // comparision between rock and scissors
    if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    // comparision between paper and rock
    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else if ((char2 == 'p') && (char1 == 'r'))
    {
        return 0;
    }

    // comparision between scissors and paper
    else if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else if ((char2 == 's') && (char1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerScore = 0, CompScore = 0, temp;
    char playerChar, compChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock, Paper, Scissors. \n");

    for (int i = 0; i < 3; i++)
    {
        // take player 1's input
        printf("Player 1's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors.\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);

        // Generate Computer's input
        printf("Computer's Turn:\n");
        printf("Choose 1 for Rock, 2 for Paper and 3 for Scissors.\n");
        temp = generateRandomNumber(3) - 1;
        compChar = dict[temp - 1];
        printf("Computer choose %c\n\n", compChar);

        if (greater(compChar, playerChar) == 1)
        {
            CompScore += 1;
            printf("CPU Got It! \n\n");
        }
        else if (greater(compChar, playerChar) == -1)
        {
            CompScore += 1;
            playerScore += 1;
            printf("It's a draw! \n\n");
        }
        else
        {
            playerScore += 1;
            printf("You Got It! \n\n");
        }
        printf("You: %d\n CPU: %d\n", playerScore, CompScore);
    }

    if (playerScore > CompScore)
    {
        printf("Congratulations You have won the game!!! \n");
    }
    else if (CompScore > playerScore)
    {
        printf("Unfortunately You have lost the game. Better luck next time!!\n");
    }
    else
    {
        printf("It's a draw!!\n");
    }

    return 0;
}
