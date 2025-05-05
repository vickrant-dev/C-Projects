#include <stdio.h>

int main (void) {

    double num1, num2;
    char operator;

    printf("Enter your first number: ");
    scanf(" %lf", &num1);

    printf("Enter your operator: ");
    scanf(" %c", &operator);

    printf("Enter your second number: ");
    scanf(" %lf", &num2);

    switch(operator) {
        
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '/':
            if(num2 != 0) {
                printf("Result: %.2lf\n", num1 / num2);
            }
            else {
                printf("Error: Division by zero.\n");
            }
            break;
        case '%':
            if((int)num2 != 0) {
                printf("Result: %d\n", (int)num1 % (int)num2); // must be an int for modulus
            }
            else {
                printf("Error: Division by zero.\n");
            }
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        default:
            printf("Invalid operator.\n");
    }

}