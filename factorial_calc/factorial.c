#include <stdio.h>
#include <string.h>

int factorial (int x);

int main (void) {

    // prompt user
    // calculate using recursion and iteration
    // print

    // Prompt user
    int userInput;
    int x;
    do {
        printf("Number: ");
        userInput = scanf("%i", &x);
        while (getchar() != '\n');
    }
    while (x < 0 || userInput != 1 || x > 10); // ⭐

    int result = factorial(x);
    printf("The factorial for %i is %i", x, result);

}

int factorial (int x) {
    if (x <= 1) return 1;
    return x * factorial(x - 1);
}