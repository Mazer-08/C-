//9. Write a C program to print Fibonacci series up to n terms.[Fibonacci series is a series of numbers where the
// current number is the sum of previous two terms. For Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, ... , (n-1th + n-2th)]
#include<stdio.h>
void main(){
    int n;
   printf("Enter a number: \n");
   scanf("%d",&n);
   int fibo[1000];
   fibo[0]=0;
   fibo[1]=1;
   printf("\nThe fibonacci series upto %d tems is: \n%d   ",n,fibo[0]);
   printf("%d   ",fibo[1]);
   for(int i=2; i<=n-1; i++){
    fibo[i]=fibo[i-1]+fibo[i-2];
    printf("%d   ",fibo[i]);
   }
   printf("\n");
}
