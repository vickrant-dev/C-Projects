#include <stdio.h>

void checkPalindrome(int number);

int main (void) {

    long long int number;
    long long int userInput;

    do {
        printf("Enter Your Number: ");
        userInput = scanf("%lli", &number);
        while(getchar() != '\n');
    }
    while (number < 0 || userInput != 1);

    checkPalindrome(number);

}

void checkPalindrome(int number) {

    long long int originalNumber = number; // Store it, cuz the original number will be changed below.
    long long int reversed = 0;

    while (number > 0) {
        long long int single_digit = number % 10;
        reversed = reversed * 10 +  single_digit;
        number = number / 10;
    }

    if (originalNumber == reversed) {
        printf("Palindrome");
    }
    else {
        printf("Not a palindrome");
    }

}