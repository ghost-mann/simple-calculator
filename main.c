#include <stdio.h>

int main() {
    float num1,num2,result;
    char operator;
    

    while(1) {
        printf("\n=== Simple Calculator ===\n");
        printf("Enter first number: \n");
        scanf("%f", &num1);

        printf("Enter operator (+ - * /) or q to quit: ");
        scanf(" %c", &operator);

        if (operator == 'q' || operator == 'Q') {
            printf("Goodbye!\n");
            break;
        }

        printf("Enter the second number: ");
        scanf("%f", &num2);

        if (operator == '+') {
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
        }

        if (operator == '-') {
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
        }

        else if (operator == '*') {
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1,num2, result);
        }

        else if (operator == '/') {
            if (num2 == 0) {
                printf("We can't divide by zero! \n");
            } else {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1,num2,result);
            }
        }
        else {
            printf("Invalid operator! Use only + - * / \n");
        }

    }

    return 0;
}