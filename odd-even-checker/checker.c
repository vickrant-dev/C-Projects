#include <stdio.h>

int main (void) {

    // Get user input
    long long int digit;
    long long int userInput;
    do {
        printf("Enter your number: ");
        userInput = scanf(" %lli", &digit);
        while(getchar() != '\n');
    }
    while (digit < 0 || userInput != 1);

    // Check digit
    if (digit % 2 == 0) {
        printf("It's an even number\n");
    }
    else {
        printf("It's an odd number\n");
    }

}