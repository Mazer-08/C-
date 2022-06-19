//5. Write a C program to demonstrate working of logical operators.
#include <stdio.h>
 void main()
{
    int a,b,c,d;
    printf("Enter a,b,c and d respectively: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

// logical AND example
 (a > b && c == d)?printf("a > b AND c = d\n"):printf("Either a is not greater than b or c != d or both.\n");

// logical OR example
(a > b || c == d)?printf("a is greater than b OR c is equal to d\n"):printf("Neither a is greater than b nor c is equal to d\n");

 // logical NOT example
 (!a)?("a is zero\n"): printf("a is not zero");

printf("\n");
}
