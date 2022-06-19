//12. Write a C program to print the table of a number using goto statement.
#include<stdio.h>
 int main(){
   int pro,i,n,t;

   printf("Enter number: ");
   scanf("%d",&n);
   printf("Enter the desired number of multiples: ");
   scanf("%d",&t);

   read:
   i=i+1;
   pro=(i*n);
   printf("%d * %d = %d\n",n,i,pro);

   if(i < t)
    goto read;
   else{
    return 0;}
}
