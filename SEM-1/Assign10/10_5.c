//5. Write a program in C to store the age of six students (19, 21, 20, 19, 20,20)
// in an array and display the total number of duplicate ages in it.
#include<stdio.h>
void main(){
//input
   int arr[6];
   printf("Enter the ages of students: \n");
   for(int i=0; i<6; i++){
       scanf("%d",&arr[i]);
   }
//sorting way #1
   for(int i =1; i<6; i++){
	   int current = arr[i];
	   int j = i-1;
	   while(arr[j]>current && j>=0){
		   arr[j+1]=arr[j];
		   j--;
		}
		arr[j+1]=current;
	}
//checking
    int k=0, uni=0;
    while(k<5){
       int count =0;
       for(int j=k+1; j<6; j++){
           if(arr[j]==arr[k]){
               count++;
           }
           else{
               k=j;
               break;
           }
       }
       if(count>0){
           uni++;
       }
   }
   printf("The number of duplicate values = %d",uni);
}