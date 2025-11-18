// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float num1,num2;
    printf("enter the value of num1");
    scanf("%f",&num1);
    printf("enter the value of num2");
    scanf("%f",&num2);
    if (num2!=0){
        float quetiont=num1/num2;
        printf("quetiont=%.2f\n", quetiont);
    }
    else {
        printf("quetiont=undefined ");
    }
    float product=num1*num2;
    float sum=num1+num2;
    float diffrence=num1-num2;
    printf("sum=%.2f\n",sum);
    printf("product=%.2f\n", product);
    printf("diffrence=%.2f\n", diffrence);

    return 0;
}
