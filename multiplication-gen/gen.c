#include <stdio.h>

int main (void) {

    int number;
    int userInput;

    do {
        printf("Enter Your Number: ");
        userInput = scanf("%i", &number);
        while(getchar() != '\n');
    }
    while (number < 0 || userInput != 1);

    printf("Generating Multiplication Table for %i:\n", number);

    for (int i = 0; i <= 12; i++) {
        int result = number * i;
        printf(" %i x %i = %i\n", number, i, result);
    }

}