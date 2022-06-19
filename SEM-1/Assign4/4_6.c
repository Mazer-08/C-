//6. C program to check whether a number is positive, negative or zero.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter your number: ");
    scanf("%f",&n);

    if (n<0){
       printf("The number is less than zero.");
    }
    else if(n==0){
       printf("The number is equal to zero.");
    }
    else{
       printf("The number is greater than zero.");
    }
    printf("\n");
}
