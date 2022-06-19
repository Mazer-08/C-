//7. Write a C program to create simple calculator using switch case.
//   Read operation (+, -, *, /) from user.
#include<stdio.h>
void main()
{
    char ch;  int r,n1,n2;

    printf("Enter the symbol of the operation you would like to do: ");
    scanf("%c",&ch);

    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);

    switch(ch){
      case '+':
        printf("Result = %d",n1+n2); break;
      case '-':
        printf("Result = %d",n1-n2); break;
      case '*':
        printf("Result = %d",n1*n2); break;
      case '/':
        if(n2>0){
         printf("Result = %d",n1/n2);}
        else{printf("Result does not exist.");}
        break;
      case '%':
        printf("Result = %d",n1%n2); break;
      default:
        printf("Please enter a valid operation.");
 }
    printf("\n");
}

