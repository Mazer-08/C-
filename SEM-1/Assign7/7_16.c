//16. Write a C program that accepts 2 four-digit positive integers then calculates and displays the sum
//of the product of each pair of digits occupying the same position in the two numbers.[Example: if the
//first number is 3445 and the second number is 4534 then the output will be 64. 3 * 4 + 4 * 5 + 4 * 3 + 5 * 4 = 64]
#include<stdio.h>
void main(){
   int n, m, rem1, rem2, sum=0;
   printf("Enter the numbers: \n");
   scanf("%d%d",&n,&m);
   int p = n;
   int q = m;

   while(n>0 && m>0){
    rem1 = n%10;
    n = n/10;
    rem2 = m%10;
    m = m/10;
    sum = rem1*rem2 + sum;
   }
   printf("Sum = %d",sum);
   printf("\n");
}
