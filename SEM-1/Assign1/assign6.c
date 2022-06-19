#include<stdio.h>
void main()
{
//declaring variables
   float r, pi=3.14;
//taking input of desired radius
   printf("Enter radius of the circle(in m): ");
   scanf("%f", &r);
//calculating & displaying area of the desired circle
   printf("Area of the desired circle(in m^2) = %.2f",pi*r*r);
   printf("\n");
}
