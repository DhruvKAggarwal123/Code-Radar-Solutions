#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Taking input
    // printf("Enter two integers followed by an operator (+, -, *, /): ");
    scanf("%d %d %c", &num1, &num2, &operator);

    // Performing the operation
    switch (operator) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%d\n", num1 / num2);
            else
                printf("error");
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
