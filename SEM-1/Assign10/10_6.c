//6. Write a program in C to count the frequency of ages (19, 21, 20, 19, 20,20) 
//stored in an array. (Expected output: frequency of age 19= 2, 21=1,20=3)
#include<stdio.h>
void main(){
//input
   int n;
   printf("Enter the number of students: ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter the ages of students: \n");
   for(int i=0; i<n; i++){
       scanf("%d",&arr[i]);
   }
//sorting way #1
   for(int i =1; i<n; i++){
	   int current = arr[i];
	   int j = i-1;
	   while(arr[j]>current && j>=0){
		   arr[j+1]=arr[j];
		   j--;
		}
		arr[j+1]=current;
   }
//checking
     int k=0, ref;
    while(k<n){
       int count=1;
       ref=k;
       if(k+1<n){
            for(int j=k+1; j<n; j++){
               if(arr[j]==arr[k]){
                   count++;
               }
               else{
                   k=j;
                   break;
               }
            }
       }
       else{
           ref=n-1;
           k++;
       }
    printf("The number %d occurs %d times.\n",arr[ref],count);
    }   
}
   