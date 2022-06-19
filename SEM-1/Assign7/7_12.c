//12. Write a C program to check whether given number is Armstrong number or Not.
//[Example: Armstrong number - 153 = 1^3 + 3^3 + 5^3 ]
#include<stdio.h>
void main(){
   int n, rem, sum=0;
   printf("Enter a number: ");
   scanf("%d",&n);
   int p = n;

   while(n>0){
    rem = n%10;
    n = n/10;
    sum = (rem*rem*rem) + sum;
   }

   if(p==sum){
    printf("The given number is an Amrstrong number.");
   }
   else{
    printf("The given number is not an Armstrong number.");
   }
   printf("\n");
}
