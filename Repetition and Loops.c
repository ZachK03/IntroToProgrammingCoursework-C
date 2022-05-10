#include <stdio.h>

int main(void) {
    printf("\n\n\n\n\n");
    int multiplesOfFive = 5;
    //While multiplesOfFive is between 0 and 60 print the number, increment by 5.
    while(multiplesOfFive > 0 && multiplesOfFive < 60) {
        printf("%i",multiplesOfFive);
        //For looking pretty, add comma and space if number is not 55
        if(multiplesOfFive != 55) {
            printf(", ");
        }
        multiplesOfFive += 5;
    }
    printf("\n");

    //While count is less than 200 and divisible by 2 and 7, print the number, increment by one
    int count = 1;
    while(count < 200) {
        if(count % 2 == 0 && count % 7 == 0) {
            printf("%i ", count);
        }
        count++;
    }
    printf("\n");

    //While count is between 100 and 500 if count is divisible by 8 count to sumOfMultiplesOfEight, increment by one
    count = 100;
    int sumOfMultiplesOfEight = 0;
    while(count < 500) {
        if(count % 8 == 0) {
            sumOfMultiplesOfEight += count;
        }
        count++;
    }
    printf("%i\n",sumOfMultiplesOfEight);

    //While count is between 20 and 100, if count has a remainder when divided by 2 add count to sumOfOddNumbers, increment by one
    count = 20;
    int sumOfOddNumbers = 0;
    while(count < 100) {
        if(count % 2 != 0) {
            sumOfOddNumbers += count;
        }
        count++;
    }
    printf("%i\n",sumOfOddNumbers);
}