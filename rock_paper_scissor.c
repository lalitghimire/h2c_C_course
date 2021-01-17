#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int wins, computerWins, computerChoice, rounds;

    //print greetings message
    printf("Welcome to the Rock-Paper-Scissor game!!! \n");

    //ask user no. of rounds to play, take input and print their choice
    printf("How many rounds you wish to play? \n");
    scanf("%d", &rounds);
    printf("You chose to play %d rounds!!\n", rounds);

    //initialize random number generation function
    srand(time(0));

    //random number generation between 1 and 3 for computer choice and print computer choice
    computerChoice = rand() % 3 + 1;
    printf("Computer choice is %d", computerChoice);

    //******************End of exercises from part 1*********************//

    //--------------------part2------------------------------------------//

    // printing value of computer choice as text instead of number//
    if (computerChoice == 1)
    {
        printf("Computer choice is rock!!");
    }
    else if (computerChoice == 2)
    {
        printf("Computer choice is paper!!");
    }
    else
    {
        printf("Computer choice is scissor!!");
    }

    //declaring variables from part 2//
    int userChoiceAsInt;
    char userChoiceAsChar;

    //Asking user for input to play the game//
    printf("\nChoose R or r for rock, P or p for paper and S or s for scissors\n");
    scanf(" %c", &userChoiceAsChar);

    // Setting the userchoice to value
    if (userChoiceAsChar == 'R' || userChoiceAsChar == 'r')
    {
        userChoiceAsInt = 1;
    }
    else if (userChoiceAsChar == 'P' || userChoiceAsChar == 'p')
    {
        userChoiceAsInt = 2;
    }
    else if (userChoiceAsChar == 'S' || userChoiceAsChar == 's')
    {
        userChoiceAsInt = 3;
    }

    printf("User choice is: %d", userChoiceAsInt); // printing the value of userchoice

    //******************End of exercises from part 2*********************//

    //--------------------part3------------------------------------------//
}
