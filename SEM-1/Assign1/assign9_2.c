// for (a^2 - 2ab + b^2)
#include<stdio.h>
void main()
{
 int a,b,r;
//taking input
 printf("Enter the value of a: ");
 scanf("%d",&a);

 printf("Enter the value of b: ");
 scanf("%d",&b);
//calculating expression and displaying output
 r=((a*a)-(2*a*b)+(b*b));
 printf("The value of the exprssion= %d",r);
 printf("\n");
}
