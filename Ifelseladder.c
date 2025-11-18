// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if (num<0){
      printf("num is invalid\n");
    }
    else if (num<18){
        printf("person is not eligible ");
    }
    else if (num>18){
        printf("person is eligible ");
    }
   else {
        printf("thankyou ");
    }
    return 0;
}
