#include<stdio.h>
void main()
{
//declaring variables
   float a; int b;
//taking input price in rupees
   printf("Enter the price: ");
   scanf("%f",&a);
//converting rupees into paise
    b = (a*100);
//displaying price in paise
   printf("Your amount in Paise is: %d",b);
   printf("\n");
}
