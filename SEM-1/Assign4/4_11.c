//11. C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
void main()
{
    int n,i,r,su;
    printf("Enter your number: ");
    scanf("%d",&n);

    if((n%5)==0 && (n%11)==0){
        printf("The number is divisible by both 5 and 11.");
    }
    else {
        printf("The number is not divisible by 5 and 11.");
    }
    printf("\n");
}


