//T=2a+(b+9c)^1/2
#include<stdio.h>
#include<math.h>
void main()
{
//variable declaration
  int T,a,b,c;
//taking input
  printf("Enter a: ");
  scanf("%d",&a);
  printf("Enter b: ");
  scanf("%d",&b);
  printf("Enter c: ");
  scanf("%d",&c);
//calculating
  T=(2*a)+(sqrt(9*c+b));
//output
  printf("The value of the expression is: %d",T);
  printf("\n");
}

