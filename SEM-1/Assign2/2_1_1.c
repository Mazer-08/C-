//v=u+at
#include<stdio.h>
#include<math.h>
void main()
{
//variable declaration
  int v,u,a,t;
//input
  printf("Enter initial velocity: ");
  scanf("%d",&u);
  printf("Enter acceleration: ");
  scanf("%d",&a);
  printf("Enter time: ");
  scanf("%d",&t);
//calculating
  v=u+(a*t);
//output
  printf("The final velocity is: %d",v);
  printf("\n");
}
