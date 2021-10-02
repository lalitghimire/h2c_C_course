/*Highway 2 code 2021 KAMK-> C programming-> Rock-Paper-Scissor  ©lalitghimire*/

#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
    Rock/Paper/Scissors Game;
    Coder: Dhairya
*/
int ran(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    int ran_num, player, computer_score = 0, player_score = 0, com;
    char start_end;
start: //for start again
    printf("\tWelcome to Rock/Paper/Scissors Game!\n");
    printf("Rules:\n\t1.Chose  only numbers\n\t2.It's a best of 5 game.\n");
    printf("Let's start\n");
    printf("************************\n");
    for (int i = 0; i < 5; i++) //loop start for best of 5
    {
    /*Player Chossing*/
    chose: //if player choose wrong input programmes come here
        printf("\nChose only numbers(1.Rock/2.Paper/3.Scissors): ");
        scanf("%d", &player);
        ran_num = ran(9); //calling ran dunction for random number

        if (player == 1 || player == 2 || player == 3)
        {
            /*Computer Chossing*/
            if (ran_num >= 0 && ran_num <= 3)
            {
                com = 0;
                printf("Computer: Rock\n");
            }
            else if (ran_num >= 4 && ran_num <= 6)
            {
                com = 1;
                printf("Computer: Paper\n");
            }
            else if (ran_num >= 7 && ran_num <= 10)
            {
                com = 2;
                printf("Computer: Scissors\n");
            }
            /*Comparing player and computer chosses*/
            if (com == 0 && player == 1 || com == 1 && player == 2 || com == 2 && player == 3)
            {
                printf("Result: Draw!\n");
            }
            else if (com == 0 && player == 2 || com == 1 && player == 3 || com == 2 && player == 1)
            {
                printf("Result: Player scores!\n");
                player_score += 5;
            }
            else if (com == 0 && player == 3 || com == 1 && player == 1 || com == 2 && player == 2)
            {
                printf("Result: Computer Scores!\n");
                computer_score += 5;
            }
        }
        else //if player choose wrong input programmes come here
        {
            printf("Wrong Input!\a\n");
            goto chose; //Goto Line no: 30
        }
    }
    printf("\n\nMatch End!\t\t\t\tComputer Scores: %d\t\tPlayer Scores: %d\n", computer_score, player_score);
    if (computer_score > player_score)
    {
        printf("\nComputer Wins!!");
    }
    else if (computer_score < player_score)
    {
        printf("\nPlayer Wins!!");
    }
    else
    {
        printf("Draw!!");
    }

input: //For input again that player want to play or not
    printf("\nEnter s to play again and q to quite: ");
    scanf(" %c", &start_end);
    switch (start_end) //Taking player decision
    {
    case 's': //If player choose to play again
        printf("Starting..............\n\n\n");
        goto start; //Goto Line no: 15
        break;
    case 'q':     //If player choose to end the game
        goto end; //Goto Line no: 75
        break;
    default: //If users give wrong input
        printf("Wrong Input!\a\n");
        goto input; // Goto Line no: 58
        break;
    }
end: //If player choose to end the game
    printf("Quiting.......................");

    return 0;
}
