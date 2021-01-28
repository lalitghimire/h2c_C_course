/*Highway 2 code 2021 KAMK-> C programming-> Rock-Paper-Scissor  ©lalitghimire*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Function declarations
int ask();                                                                               // ask user for their choice between rock paper and scissors
int generate();                                                                          // generate computers choice among rock paper and scissors
int checkWin(int firstChoice, int secondChoice);                                         //function which compare choices and output result
void printResult(int result, int *add_draw, int *add_playerWins, int *add_computerWins); // print result of each round and updates wins

int main()
{
    //variables declarations
    int rounds;
    int draw = 0;
    int playerWins = 0;
    int computerWins = 0;
    int computerChoice, userChoiceAsInt;
    int result;
    srand(time(0)); // Initialize random number generator
	
    //print greetings message//
    printf("Welcome to the Rock-Paper-Scissor game!!! \n");

    //ask user no. of rounds to play, take input and print their choice//
    printf("How many rounds you wish to play? \n");
    scanf("%d", &rounds);
    printf("You chose to play %d rounds!!\n", rounds);

    //looping through the number of rounds to play
    for (int i = 0; i < rounds; i++)
    {
        //function calls

        userChoiceAsInt = ask();
        computerChoice = generate();
        result = checkWin(userChoiceAsInt, computerChoice);

        //printing result for each round and updating the wins and draws for player and computer
		
        printResult(result, &draw, &playerWins, &computerWins);
    }
    //printfinalresult after the end of all rounds
    printf(" \n");
    printf(".. the game ends.. \n");
    printf("You won: %d/%d times\n", playerWins, rounds);
    printf("Computer Won: %d/%d times\n", computerWins, rounds);
    printf("Number of ties: %d \n", draw);
}

//***********************end of main**************************

//function definitions

//function to  ask user's choice as character, checks for correct value and return corresponding integer value
int ask()
{
    char input;
    int output;

    // do while loop to validate the entered character
    do
    {
        printf("\nChoose R or r for rock, P or p for paper and S or s for scissors\n");
        scanf(" %c", &input);
    } while (input != 'R' && input != 'r' && input != 'P' && input != 'p' && input != 'S' && input != 's');

    //assign integer value to user's choice
    if (input == 'R' || input == 'r')
    {
        output = 1;
        printf("Your choice is Rock!! \n");
    }
    else if (input == 'P' || input == 'p')
    {
        output = 2;
        printf("Your choice is Paper!! \n");
    }
    else if (input == 'S' || input == 's')
    {
        output = 3;
        printf("Your choice is Scissors!!\n");
    }
    return output;
}


//function to generate a random value and print out computer's choice accordingly
int generate()
{
    //random number generation between 1 and 3
    int random = rand() % 3 + 1;

    // printing out computer choice
    if (random == 1)
    {
        printf("Computer choice is rock!! \n");
    }
    else if (random == 2)
    {
        printf("Computer choice is paper!!\n ");
    }
    else if (random == 3)
    {
        printf("Computer choice is Scissors!!\n ");
    }
    return random;
}

//function takes two integer parameters, compare and return values accordingly
int checkWin(int firstChoice, int secondChoice)
{
    if (firstChoice == secondChoice)
    {
        return 0;
    }
    else if (firstChoice == 1 && secondChoice == 3 || firstChoice == 2 && secondChoice == 1 || firstChoice == 3 && secondChoice == 2)
    {
        return 1;
    }
    else if (firstChoice == 1 && secondChoice == 2 || firstChoice == 2 && secondChoice == 3 || firstChoice == 3 && secondChoice == 1)
    {
        return -1;
    }
}

//takes result as input compares and print result of each round. update draw, playerWins and computerWins variable
//pointers are used to update the variables
void printResult(int result, int *add_draw, int *add_playerWins, int *add_computerWins)
{

    if (result == 0)
    {
        printf("It's a tie!!\n");
        *add_draw += 1;
    }
    else if (result == 1)
    {
        printf("You won!!\n");
        *add_playerWins += 1;
    }
    else if (result == -1)
    {
        printf("Computer won!!\n");
        *add_computerWins += 1;
    }
}