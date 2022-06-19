//s=ut+1/2at^2
#include<stdio.h>
#include<math.h>
void main()
{
//variable declaration
  int s,u,a,t;
//taking input
  printf("Enter initial velocity: ");
  scanf("%d",&u);
  printf("Enter acceleration: ");
  scanf("%d",&a);
  printf("Enter time: ");
  scanf("%d",&t);
//calculating
  s=(u*t)+((a*pow(t,2))/2);
//output
  printf("The displacement is: %d",s);
  printf("\n");
}
