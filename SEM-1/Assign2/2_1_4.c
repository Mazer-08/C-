//pythagoras
#include<stdio.h>
#include<math.h>
void main()
{
//variable declaration
  int h,b,p;
//taking input
  printf("Enter base: ");
  scanf("%d",&b);
  printf("Enter perpendicular: ");
  scanf("%d",&p);
//calculating
  h=sqrt(pow(b,2)+pow(p,2));
//output
  printf("The length of hypotenuse is: %d",h);
  printf("\n");
}
