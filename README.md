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
