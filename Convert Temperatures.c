/*
    Assignment 10 Functions - Zachary Krantz

    This program will use functions and create a menu giving the user different options.
     - 1. Convert temperature from F to C
     - 2. Convert temperature from C to F
     - 3. Quit
*/
#include <stdio.h>

//Declare functions
bool displayMenu();
bool handleUserInput(int userSelection);
float convertCelsiusToFahrenheit(int celsius);
float convertFahrenheitToCelsius(int fahrenheit);

int main(void) {
    //Declare variables and bool for do while loop
    bool isRunning = true;
    //Introduction text
    printf("\n\n\nTemperature Converter\n");
    do {
        isRunning = displayMenu();
    } while (isRunning);

    //Return 0 to show all is well
    return 0;
}

//Define functions
bool displayMenu() {
    //Initialize variables
    bool isRunning = true;
    int userSelection;
    //Menu options
    printf("Select from the options:\n");
    printf("  1. Convert temperature from F to C\n  2. Convert temperature from C to F\n  3. Quit\n");
    scanf("%d", &userSelection);
    //Send to handleUserInput
    isRunning = handleUserInput(userSelection);
    //Return if continue again
    return isRunning;
}

bool handleUserInput(int userSelection) {
    //Init variables
    bool returnValue = true;
    int celsius;
    int fahrenheit;
    //Switch for each menu option
    switch(userSelection) {
        case 1:
            //F to C
            //Get user input, call function in printf
            printf("Input the temperature in fahrenheit: ");
            scanf("%d",&fahrenheit);
            printf("Celcius: %.2lf\n",convertFahrenheitToCelsius(fahrenheit));
            break;

        case 2:
            //C to F
            //Get user input, call function in printf
            printf("Input the temperature in celcius: ");
            scanf("%d",&celsius);
            printf("Fahrenheit: %.2lf\n",convertCelsiusToFahrenheit(celsius));
            break;

        case 3:
            //Quit selection
            printf("Exiting program...\n");
            //Change bool to false so do while stops looping
            returnValue = false;
            break;
        
        default:
            //Invalid input
            printf("This option doesn't exist!\n");
    }
    printf("\n");
    return returnValue;
}

float convertCelsiusToFahrenheit(int celsius) {
    //Return float of fahrenheit with conversion
    float fahrenheit;
    fahrenheit = (9.0/5.0) * celsius + 32;
    return fahrenheit;
}

float convertFahrenheitToCelsius(int fahrenheit) {
    //Return float of celsius with conversion
    float celsius;
    celsius = (5/9.0) * (fahrenheit - 32);
    return celsius;
}