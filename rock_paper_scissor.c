#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int wins = 0;
    int computerWins = 0;
    int draw = 0;
    int computerChoice, rounds;
    int i;
    int result;

    //print greetings message//
    printf("Welcome to the Rock-Paper-Scissor game!!! \n");

    //ask user no. of rounds to play, take input and print their choice//
    printf("How many rounds you wish to play? \n");
    scanf("%d", &rounds);
    printf("You chose to play %d rounds!!\n", rounds);

    for (i = 0; i < rounds; i++)
    {
        //initialize random number generation function//
        srand(time(0));

        //random number generation between 1 and 3 for computer choice and print computer choice//
        computerChoice = rand() % 3 + 1;

        //******************end of exercise from part 1*********************//

        //--------------------part2------------------------------------------//

        // printing value of computer choice as text instead of number//
        //*******************to check the results during the exercise. printing will be ommited or will be printed after user input*******
        if (computerChoice == 1)
        {
            printf("\nComputer choice is rock!! \n");
        }
        else if (computerChoice == 2)
        {
            printf("\nComputer choice is paper!!\n");
        }
        else if (computerChoice == 3)
        {
            printf("\nComputer choice is Scissors!!\n");
        }

        //declaring variables from part 2//
        int userChoiceAsInt;
        char userChoiceAsChar;

        //Asking user for input to play the game, do while loop from part 3 of exercise
        do
        {
            printf("\nChoose R or r for rock, P or p for paper and S or s for scissors\n");
            scanf(" %c", &userChoiceAsChar);
        } while (userChoiceAsChar != 'R' && userChoiceAsChar != 'r' && userChoiceAsChar != 'P' && userChoiceAsChar != 'p' && userChoiceAsChar != 'S' && userChoiceAsChar != 's');

        //Assigning values to user's valid input

        if (userChoiceAsChar == 'R' || userChoiceAsChar == 'r')
        {
            userChoiceAsInt = 1;
            printf("User choice is Rock\n");
        }
        else if (userChoiceAsChar == 'P' || userChoiceAsChar == 'p')
        {
            userChoiceAsInt = 2;
            printf("User choice is Paper\n");
        }
        else if (userChoiceAsChar == 'S' || userChoiceAsChar == 's')
        {
            userChoiceAsInt = 3;
            printf("User choice is Scissors\n");
        }

        //printf("User choice is: %d", userChoiceAsInt); // printing the value of userchoice

        //check for who wins //****part 3
        if (userChoiceAsInt == computerChoice)
        {
            printf("It's a Draw\n");
            draw = draw + 1;
        }

        else if (userChoiceAsInt == 1 && computerChoice == 3 || userChoiceAsInt == 2 && computerChoice == 1 || userChoiceAsInt == 3 && computerChoice == 2)
        {
            printf("Player wins\n");
            wins = wins + 1;
        }
        else if (userChoiceAsInt == 1 && computerChoice == 2 || userChoiceAsInt == 2 && computerChoice == 3 || userChoiceAsInt == 3 && computerChoice == 1)
        {
            printf("Computer wins\n");
            computerWins = computerWins + 1;
        }

        printf("Player wins: %d\n", wins);
        printf("Computer Wins: %d\n", computerWins);
        printf("Draws: %d \n", draw);
    }
}
