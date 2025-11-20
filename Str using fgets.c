//string  length using(fgets)
#include <stdio.h>
#include<string.h>
int main() {
       char rose[20];
    printf("enter string\n");
    fgets(rose, sizeof(rose),stdin);
    int c = strlen("rajesh kannan");
    printf("%d",c);

    return 0;
}
