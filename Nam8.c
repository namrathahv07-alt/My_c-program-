Here is the modified C program that prints:

"Distinction" → marks > 75

"Pass" → marks between 40 and 75

"Fail" → marks < 40


#include <stdio.h>

int main() {
    int marks;

    // Input from user
    printf("Enter student's marks: ");
    scanf("%d", &marks);

    // Checking result
    if (marks > 75) {
        printf("Distinction\n");
    }
    else if (marks >= 40 && marks <= 75) {
        printf("Pass\n");
    }
    else {
        printf("Fail\n");
    }

    return 0;
}
