# h2c_C_course

Assignment of C programming module in highway to code course by Kajaani Amattikorkeakolu

Rock paper scissor game in 5 part.

Instructions as given in exercises

Rock-Paper-Scissors, part 1

- Write a main for the rock-paper-scissors game. First, print a welcoming message to the screen.
- In main, define four variables (type: int) called wins, computerWins, computersChoice and rounds.
- Ask the user how many rounds she wishes to play (use rounds-variable)
- In main, initialize random number generation: srand(time(0)); Remember to include <time.h>
- Then, generate a random number between 1 and 3: rand() % 3 + 1. Set the value to the computerChoice variable.
- Print the value of computersChoice to the screen.

Rock-Paper-Scissors, part 2

- Print the value of computersChoice as text to the screen using an if-clause. (1=rock, 2=paper, 3=scissors)
- Define new variables called userChoiceAsChar (char) and userChoiceAsInt (int)
- Ask the user's choice using printf and scanf. R or r = rock, P or p = paper, S or s = scissors
- Using if, set the userChoiceAsInt to a correct value (1, 2 or 3)
- Print the value of userChoiceAsInt

Rock-Paper-Scissors, part 3

- Add a do-while -loop to the main program. In the loop, ask user's choice (as char). Check that the input is correct and if not, ask user's choice again.
- Add an int variable called "result" to the main program (1 = player wins, -1 = computer wins, 0 = draw)
- Add an if-else clause for checking who won (player or computer?). You should compare the variables userChoiceAsInt and computersChoice
- Print the result of the game as text to the console.

Rock-Paper-Scissors, part 4

- Add a loop to the main program so that te user may play as many rounds as she has defined. Move the needed code blocks inside the loop (asking the user's choice, generating the computer's choice and printing the result)
- Update the variables "wins" and "computerWins" in the end of each roun

Rock-Paper-Scissors, part 5
- Divide the functionality of the main program into functions as follows:
- int ask() - asks the user's choice and returns it as a number
- int generate() - generates a random number between 1 and 3 and returns it
- int checkWin(int playerChoice, int computerChoice) - the function returns a number telling which one won: 1: player, -1: computer, 0 = draw
- void printResult(int computerChoice, int result) - the function prints out the results of a one round

******************* the final exercise instructions******************
Rock-Paper-Scissors game
In this assignment, you build a simple Rock-Paper-Scissors -game where the player plays against the computer. The assignment is divided into five parts. Instructions for each part can be found in the exercise sections of this course. It is not mandatory to follow all the instructions, you can code the program as you wish. BUT some rules do apply:

- the user must be asked how many rounds she wants to play
- the final results (number of wins, ties and losses) must be printed out in the end of the game
- usage of global variables is forbidden
- usage of goto-statement is forbidden
- you must use functions (=all the code cannot be in the main method)
- you must comment your source code properly