Here is a simple C program to check whether a number is within the range 10 to 100:

#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if number is in the range 10 to 100
    if (num >= 10 && num <= 100) {
        printf("%d is within the range 10 to 100\n", num);
    } else {
        printf("%d is NOT within the range 10 to 100\n", num);
    }

    return 0;
}
