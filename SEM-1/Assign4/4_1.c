/*1. C program to check whether student is passed or failed. The minimum marks required to pass the exam is 35.*/
#include<stdio.h>
void main()
{
  int m;
  printf("Enter your marks out of 100 : ");
  scanf("%d",&m);

   if(m>=34){
       printf("You've passed the exam.");
   }
   else{
       printf("You've failed the exam.");
   }
   printf("\n");
}


