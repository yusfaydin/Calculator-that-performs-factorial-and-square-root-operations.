#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    char op;
    double square;
    double num1, num2, i;
    double f=1;
    printf("Choose operation (+, -, *, /, !, sqrt(S/s): ");
    scanf("%c", &op);
   
    if(op !='!' && op !='s' && op !='S'){

        printf("Enter the first number: ");
        scanf("%lf",&num1);
        printf("Enter the second number: ");
        scanf("%lf",&num2);
    }
    else {
        
        printf("Enter a number: ");
        scanf("%lf", &num1);
    }
    switch (op) {
        case'S':
        case's':
                if (num1 >= 0) {
                    square= sqrt(num1);
                    printf("Square root result = %lf\n", square);
                } else {
                    printf("Error: Cannot calculate square root of a negative number!\n");
                }
            break;
        case'!':
            if(num1<0){
                printf("Error: Cannot calculate factorial of a negative number!");
                }
            else if(num1==0 && num1==1){
                printf("Factorial result = 1");
            }
            else{
                for(i=1;i<=num1;i+=1){
                    f=f*i;
                }
                printf("Factorial result = %.0lf\n", f);
            }
            break;
        case '+':
            printf("Sum result = %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Subtraction result = %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Multiplication result = %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Division result = %.2lf\n", num1 / num2);
            } else {
                printf("Error: Cannot divide by zero!\n");
            }
            break;
        default:
            printf("Invalid operation!\n");
            }

    
    return 0;
}

