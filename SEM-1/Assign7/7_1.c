//1. Write a C program to do the following task:
// a) Accept any 2 positive numbers, say n1 and n2. Assume n1 > n2.
// b) Print all even numbers that lie between n1 and n2.
// c) Print the sum of all even numbers between n1 and n2.
#include<stdio.h>
void main(){
 int n1,n2,i,sum=0;
 //a)
 printf("Enter n1 and n2 respectively: \n");
 scanf("%d %d",&n1,&n2);
 //b)
 printf("\nOUTPUT:\n");
 if(n1<n2){
    for(i=n1+1; i<n2; i++){
        int x = i%2;
        if(x==0){
            printf("%d\n",i);
            sum = sum + i;
        }
    }
 }
 else{
    for(i=n2+1; i<n1; i++){
        int x = i%2;
        if(x==0){
            printf("%d\n",i);
            sum = sum + i;
        }
    }  
 }
 printf("Sum of even numbers b/w the given two numbers is %d.",sum);
   printf("\n");
}
