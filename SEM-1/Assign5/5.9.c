//9. Write a C program to check whether a number is even or odd using ternary operator.
#include<stdio.h>
 void main(){
   int n1,n2;

   printf("Enter a number: ");
   scanf("%d",&n1);

   n2=n1%2;

  (n2==0)?printf("The number is Even"):printf("The number is Odd");


}
