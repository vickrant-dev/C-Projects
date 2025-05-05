#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateNum(int number) {

    int generatedNumber = (rand() % 10 + 1); // Limited to 1 - 10

    if (generatedNumber == number) {
        printf("You Guessed it Right!\n");
    } 
    else {
        printf("Your Number: %i\n", number);
        printf("Computer Generated Number: %i\n", generatedNumber);
    }
}

int main (void) {

    int number;
    int userInput;

    srand(time(NULL)); // It's used to initialize the random number generator with a changing seed

    do {
        printf("Enter a number between 1 and 10: ");
        userInput = scanf("%i", &number);
        while(getchar() != '\n');
    }
    while ((number <  1 || number > 10) || userInput !=1 );
    
    generateNum(number);

}