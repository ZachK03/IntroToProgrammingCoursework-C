#include <stdio.h>

int main(void) {
    //Declare variables for holding values
    int inputNumber;
    int lowestNumber;
    int highestNumber;
    int sumOfNumbers = 0;
    int totalNumbers = 0;
    float averageOfNumbers;
    //Give user information about how to operate
    printf("\n\n\n\nInput numbers to get number data.\nEnter -1 to exit.\n");
    //Do while inputNumber != -1 (Exit number)
    do {
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
        //Increment totalNumbers by 1
        totalNumbers++;
    } while (inputNumber != -1);
    //Output messages
    printf("The lowest number was: %i\n",lowestNumber);
    printf("The highest number was: %i\n",highestNumber);
    printf("The number of values entered was: %i\n",totalNumbers);
    averageOfNumbers = (double)sumOfNumbers/totalNumbers;
    printf("The average of the numbers was: %.2lf\n",averageOfNumbers);
}