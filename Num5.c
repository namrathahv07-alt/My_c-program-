Here is a simple C program to check whether a character is a vowel or a consonant:

#include <stdio.h>

int main() {
    char ch;

    // Input from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        
        printf("%c is a Vowel\n", ch);
    }
    else {
        printf("%c is a Consonant\n", ch);
    }

    return 0;
}
