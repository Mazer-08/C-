//13. Write a C program to check whether a number is Perfect number or not.[Perfect number is a positive integer which is
//equal to the sum of its proper positive divisors. Example: 6 is the first perfect number. Proper divisors of 6 are 1, 2, 3]
#include<stdio.h>
void main(){                        //28, 496, 8128
   int n, sum=0;
   printf("Enter a number: ");
   scanf("%d",&n);

   for(int i=1; i<n; i++){
    if(n%i==0){
        sum += i;
    }
   }

   if(n==sum){
    printf("The given number is a Perfect number.");
   }
   else{
    printf("The given number is not a Perfect number.");
   }
   printf("\n");
}
