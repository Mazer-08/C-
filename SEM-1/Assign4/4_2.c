//2. C program check whether a number is even or odd.
#include<stdio.h>
void main()
{
    int n1,n2;
    printf("Enter your number: ");
    scanf("%d",&n1);

    n2=n1%2;

    if (n2==0){
        printf("The no. you have entered is even.");
    }
    else{
        printf("The no. you have entered is odd.");
    }
    printf("\n");
}
