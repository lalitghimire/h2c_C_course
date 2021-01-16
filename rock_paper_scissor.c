#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int wins, computerWins, computerChoice, rounds;

    //print greetings message//
    printf("Welcome to the Rock-Paper-Scissor game!!! \n");

    //ask user no. of rounds to play, take input and print their choice//
    printf("How many rounds you wish to play? \n");
    scanf("%d", &rounds);
    printf("You chose to play %d rounds!!\n", rounds);

    //initialize random number generation function//
    srand(time(0));

    //random number generation between 1 and 3 for computer choice and print computer choice//
    computerChoice = rand() % 3 + 1;
    printf("Computer choice is %d", computerChoice);

    //******************end of exercise from part 1*********************//
}