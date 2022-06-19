//8. Write a C program to find sum of digits of a given number using recursion.
#include<stdio.h>
int check(int n){
   if(n==0){
       return 0;
   }
   int rem, sum=0;
   rem = n%10;
   n = n/10;
   sum = sum + rem + check(n);
   return sum;
}
void main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("%d",check(n));

}