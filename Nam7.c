Here is a simple C program to check whether a given year is a leap year:

#include <stdio.h>

int main() {
    int year;

    // Input from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year condition
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year\n", year);
    } else {
        printf("%d is NOT a Leap Year\n", year);
    }

    return 0;
}
