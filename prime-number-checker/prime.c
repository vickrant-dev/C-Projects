#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main (void) {

    long long int number;
    long long int userInput;
    int is_prime = 1;

    do {
        printf("Enter Your Number: ");
        userInput = scanf(" %lli", &number);
        while(getchar() != '\n');
    }
    while (number < 0 || userInput != 1);

    if (number < 2 ) {
        is_prime = 0;
    }
    else {
        for (float i = 2; i <= sqrt(number); i++) {
            if ((number) % (int)i == 0) {
                is_prime = 0;
                break;
            }
        }
    }

    if(is_prime) {
        printf("It's a Prime Number");
    }
    else {
        printf("It's not a Prime Number");
    }

}