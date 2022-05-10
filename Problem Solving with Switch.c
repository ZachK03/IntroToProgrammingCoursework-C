/*
    Problem Solving with Switch - Zachary Krantz

    Allows the user to enter 5 numbers.
    Then asks the user to select a choice from a menu to show specific information.
     - 1. Display the smallest number entered
     - 2. Display the largest number entered
     - 3. Display the sum of the five numbers entered
     - 4. Display the average of the five numbers entered
    Uses a switch statement to handle decision from user. 
     - An error must display if an invalid choice is entered.
    Run the program five times, once using each option and finally an invalid option.
     - Data set: 18, 21, 17, 44, 9.
*/

#include <stdio.h>

int main(void) {
    //Declare variables for holding values
    int inputNumber;
    int lowestNumber;
    int highestNumber;
    int sumOfNumbers = 0;
    float averageOfNumbers;

    for (int i = 0; i < 5; i++) {
        //Get user input for number
        printf("Input a number: ");
        scanf("%d", &inputNumber);
        //If inputNumber is -1, exit loop
        if(inputNumber == -1) {
            break;
        }
        //If less than 0, show warning and continue to next iteration
        if(inputNumber < 0) {
            printf("Must be greater than zero!\n");
            continue;
        }
        //If lowestNumber doesnt exist, define it, else, if inputNumber is lower, reassign lowestNumber
        if(!lowestNumber) {
            lowestNumber = inputNumber;
        } else {
            if(inputNumber < lowestNumber) {
                lowestNumber = inputNumber;
            }
        }
        //If highestNumber doesnt exist, define it, else, if inputNumber is higher, reassign highestNumber
        if(!highestNumber) {
            highestNumber = inputNumber;
        } else {
            if(inputNumber > highestNumber) {
                highestNumber = inputNumber;
            }
        }
        //Increment sumOfNumbers by value of inputNumber
        sumOfNumbers += inputNumber;
    }

    //Declare variable for menu selection
    int userMenuSelection;
    //Display menu options and get user input
    printf("Select an option:\n");
    printf("  1. Display the smallest number entered\n  2. Display the largest number entered\n  3. Display the sum of the five numbers entered\n  4. Display the average of the five numbers entered\n");
    scanf("%d",&userMenuSelection);

    //Switch statement for each option
    switch(userMenuSelection) {
        case 1:
            //Smallest
            printf("The smallest number was: %i.\n",lowestNumber);
            break;

        case 2:
            //Largest
            printf("The largest number was: %i.\n",highestNumber);
            break;

        case 3:
            //Sum
            printf("The sum of the numbers was: %i.\n",sumOfNumbers);
            break;

        case 4:
            //Average
            averageOfNumbers = (float)sumOfNumbers/5;
            printf("The average of the numbers was: %.2lf.\n",averageOfNumbers);
            break;

        default:
            //Error! Not available you doofus!
            printf("The option you selected is not a real one!");
    }
    //Return 0 to show all is well
    return 0;
}