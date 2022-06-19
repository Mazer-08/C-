//for (a^3 + b^3 + c^3 - 3abc)
#include<stdio.h>
void main()
{
 int a,b,c,r;
//taking input
 printf("Enter the value of a: ");  // better way: printf("Enter a,b,c");   scanf("%d %d %d",&a,&b,&c);
 scanf("%d %d %d",&a);

 printf("Enter the value of b: ");
 scanf("%d",&b);

 printf("Enter the value of c: ");
 scanf("%d",&c);
//calculating and displaying output
 r=((a*a*a)-(3*a*b*c)+(b*b*b)+(c*c*c));
 printf("The value of the exprssion= %d",r);
 printf("\n");
}
