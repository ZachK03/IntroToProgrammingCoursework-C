/*
    Grade Processor - Zachary Krantz
    Takes any number of grades and shows the number & percent of passing
     - -1 value required to stop taking values
     - 70 is the minimum passing value
     - If less than 0 or greater than 100 show an error message and continue counting.
*/

#include <stdio.h>

int main(void) {
    //Intitialize variables for grade, counter for number of passing, counter for total, and float for percentage.
    int grade;
    int countNumberOfPassing = 0;
    int countTotal = 0;
    float percent = 0.0;

    //Do while loop to ask for a grade while grade doesn't equal -1
    do {
        //Get user input
        printf("Enter grade: ");
        scanf("%d", &grade);
        //If -1 break from loop
        if(grade == -1) {
            break;
        }
        //If grade is greater than 100 or less than 0 show error and continue to next iteration.
        if(grade > 100 || grade < 0) {
            printf("This is not a valid grade.\n");
            continue;
        }
        //If grade is greater than or equal to 70 increment passing counter
        if(grade >= 70) {
            countNumberOfPassing++;
        }
        //Increment total counter
        countTotal++;
    } while (grade != -1);

    //Print number of passing
    printf("You entered %i passing grades.\n",countNumberOfPassing);
    //Calculate and print percent of passing
    percent = 100.0*countNumberOfPassing/countTotal;
    printf("%.2f %% of the valid grades were passing grades.",percent);
}