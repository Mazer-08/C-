//4. Write a Program to find the largest and smallest element in Array
#include<stdio.h>
#include<limits.h>
void main(){
//input
   int n;
   printf("How many numbers do you want to store: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
       scanf("%d",&arr[i]);
   }
//calculating
   int min = INT_MAX, max = INT_MIN;
   for(int i=0; i<n; i++){
       if(arr[i]<=min){
           min = arr[i];
       }
       if(arr[i]>=max){
           max = arr[i];
       }
   }
//output
   printf("Largest element = %d\n",max);
   printf("Smallest element = %d",min);
}