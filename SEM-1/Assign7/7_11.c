//11. Write a C program to check whether a number is palindrome or not.
//[Palindrome number is such number which when reversed is equal to the original number. Example: 121]
#include <stdio.h>
#include <math.h>
int main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   int last = n;
   int f = log10(n);
  
   int rem; 
   float c=0;
   while(n>0){
    rem = n%10;
    n = n/10;
    c = ((pow(10,f)*rem) + c);
    f--;
   }
   if (c==last){printf("It is a palindrome.");}
   else{printf("It is not a palindrome.");}
   printf("\n");
}
