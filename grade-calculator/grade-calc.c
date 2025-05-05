#include <stdio.h>

const int A_Grade = 75;
const int B_Grade = 65;
const int C_Grade = 55;
const int S_Grade = 35;

int main (void) {

    int score;
    int userInput;

    do {
        printf("What's your score? ");
        userInput = scanf(" %i", &score);
        while(getchar() != '\n');
    }
    while(score < 0 || userInput != 1);

    if (score >= A_Grade ) {
        printf("Your Grade: A");
    }
    else if (score >= B_Grade) {
        printf("Your Grade: B");
    }
    else if (score >= C_Grade) {
        printf("Your Grade: C");
    }
    else if (score >= S_Grade) {
        printf("Your Grade: S");
    }
    else if (score < S_Grade) {
        printf("Your Grade: F");
    }
    else {
        printf("Invalid Score");
    }

}