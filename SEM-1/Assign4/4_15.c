//15. C program to make a simple calculator.
#include<stdio.h>
void main()
{
    char ch;  int n1,n2;
    printf("Enter the symbol of the operation you would like to do:");
    scanf("%[+,-,*,/,%]",&ch);

    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);

    if(ch=='+'){
        printf("Result = %d",n1+n2);
    }
    else if(ch=='-'){
        printf("Result = %d",n1-n2);
    }
    else if(ch=='*'){
        printf("Result = %d",n1*n2);
    }
    else if(ch=='/'){
        printf("Result = %d",n1/n2);
    }
    else if(ch=='%'){
        printf("Result = %d",n1%n2);
    }
    else{
        printf("Please enter a valid operation.");
    }
    printf("\n");
}
