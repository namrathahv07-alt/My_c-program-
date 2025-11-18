

#include <stdio.h>

int calculator () {
    float num1, num2;
    
    // Taking input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Calculations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    
    if (num2 != 0) {
        float quotient = num1 / num2;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Quotient = Undefined (division by zero not allowed)\n");
    }
    
    // Display results
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
}
    int main(){
    calculator();
    }