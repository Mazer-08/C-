//1. Write a program to insert 5 elements into an array and print the elements
// of the array.
#include <stdio.h>

int main() {
//input
   int n;
   printf("How many numbers do you want to store: ");
   scanf("%d",&n);
   int arr[n];
   for(int i=0; i<n; i++){
       scanf("%d",&arr[i]);
   }
//output
   for(int i=0; i<n; i++){
	   printf("%d  ",arr[i]);
   }
	return 0;
}
