//6. Write a C program to find sum of all natural numbers between 1 to n using recursion.
#include<stdio.h>
int sum(int n){
    int x = 0;
    if(n > 0){
       x = n + sum(n-1);
       return x;
    }
}
void main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Sum = %d",sum(n));
}