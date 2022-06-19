//7. Write a C program to check whether a number is palindrome or not using recursion.
#include<stdio.h>

int check(int n1){
   int rem;
   static int sum = 0;
   if(n1!=0){
        rem = n1%10;
        n1 = n1/10;
        sum = (sum*10) + rem;
        check(n1);
   }
   else{
       return sum;
   }
}

void main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n); 
    int x = check(n);
    
    if(x == n){
        printf("Yes it is a palindrome.");
    }
    else{
        printf("Not a palindrome.");
    }
    
}