

#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility by both 5 and 3
    if (num % 5 == 0 && num % 3 == 0) {
        printf("%d is divisible by both 5 and 3\n", num);
    } else {
        printf("%d is NOT divisible by both 5 and 3\n", num);
    }

    return 0;
}
