//swapping values of two variables
#include<stdio.h>
#include<math.h>
void main()
{
//variable declaration
  int a,b;
//taking input
  printf("Enter a: ");
  scanf("%d",&a);
  printf("Enter b: ");
  scanf("%d",&b);
  printf("\n");
//
  a=a+b;
  b=a-b;
  a=a-b;
//output
  printf("The value of a is: %d \n",a);
  printf("The value of b is: %d \n",b);
  printf("\n");
}
