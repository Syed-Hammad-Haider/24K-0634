#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;
    printf("Enter a number 1: ");
    scanf("%f", &num1);
    printf("Enter a number 2: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else 
                printf("Division by zero is not allowed.");
            break;
        default:
            printf("Error: Invalid operator.");
  }
    printf("Answer = %.3f\n", result);
}
