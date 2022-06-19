//3. Write a program in C to store the obtained marks (may be float) of five
// subjects in an array. Find the sum and average of obtained marks.
#include<stdio.h>

void main(){
//input & calculation
   printf("Enter the marks obtained: \n");
   float arr[5], sum=0;
   for(int i=0; i<5; i++){
       scanf("%f",&arr[i]);
       sum = sum + arr[i];
   }
//output
   printf("The sum of the obatined marks = %.2f\n",sum);
   printf("The average of the obatined marks = %.2f\n",sum/5);
}