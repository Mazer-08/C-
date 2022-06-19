#include<stdio.h>
void main()
{
//declaring variables
   float p,r,t;
//taking input of desired values
   printf("Enter the Principal Amount you want to invest: ");
   scanf("%f", &p);

   printf("Enter the Rate of Interest Percent: ");
   scanf("%f", &r);

   printf("Enter the Time Period(in yrs): ");
   scanf("%f", &t);
//calculating & displaying si
   printf("Simple Interest = %.2f",p*r*t/100);
   printf("\n");
}
