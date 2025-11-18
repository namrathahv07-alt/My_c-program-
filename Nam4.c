Here is a simple C program to find the smallest of three numbers using if–else:

#include <stdio.h>

int main() {
    int a, b, c;

    // Taking input
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking smallest number
    if (a <= b && a <= c) {
        printf("%d is the smallest number\n", a);
    }
    else if (b <= a && b <= c) {
        printf("%d is the smallest number\n", b);
    }
    else {
        printf("%d is the smallest number\n", c);
    }

    return 0;
}

