//2. Write a C program to count number of digits in a number using do...while loop.
#include<stdio.h>
void main(){
   long int a;
   int i = 1;
   printf("Enter a number: ");
   scanf("%d",&a);

   do{
    a = a/10;
    i = i + 1;
    }
   while(a >= 10);
   printf("Number of digits = %d",i);

   printf("\n");
}
