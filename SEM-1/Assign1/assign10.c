#include<stdio.h>
void main()
{
 int a,b,c;
//taking input
 printf("Enter the value of a: ");
 scanf("%d",&a);

 printf("Enter the value of b: ");
 scanf("%d",&b);

 printf("Enter the value of c: ");
 scanf("%d",&c);
//displaying outcomes
 if (b==c)
 {
     printf("Expression does not exist for the values of b and c.");
     printf("\n");
 }
 else
 {
     float x=(a/(b-c)); //declared new variable x for simplification
     printf("The value of the expression= %f",x);
     printf("\n");
 }
}
