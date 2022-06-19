#include<stdio.h>
void main()
{
//declaring variables
   float f,c;
//taking input of temp in Fahrenheit
   printf("Enter the temperature in Fahrenheit scale: ");
   scanf("%f", &f);
//calculating & displaying temp in celsius scale
   printf("The temperature in Celsius Scale = %.1f",(f-32)*5/9);
   printf("\n");
}
