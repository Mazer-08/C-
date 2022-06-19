//5. Write a C program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
#include<math.h>
void main(){
long long int n; int a;
printf("Enter your number: ");
scanf("%lld",&n);

if(n<0){a = 1;}
else if(n==0){a = 2;}
else {a = 3;}


switch(a){
 case 1:
   printf("The number you have entered is negative."); break;
 case 2:
   printf("The number you have entered is zero."); break;
 case 3:
   printf("The number you have entered is positive."); break;
}
  printf("\n");
}
