//2. Write a Program to Search an element in array.
#include<stdio.h>
void main(){
//input
   int n;
   printf("How many numbers do you want to store: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
       scanf("%d",&arr[i]);
   }
//searching   
   int key;
   printf("Enter the key you want to search: ");
   scanf("%d",&key);
//output   
   int k;
   for(k=0; k<n; k++){
       if(key==arr[k]){
           break;
       }
   }
   printf("The key is the %dth element in the provided array.",k+1);
}