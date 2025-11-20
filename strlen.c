/ Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char rose[20];
    printf("enter string array\n");
    fgets(rose,sizeof(rose),stdin);
    printf("%s",rose);
}
