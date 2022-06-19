//1. Write a C program to check whether a number is even or odd using functions.
#include<stdio.h>
int eve(int n1){
    if(n1%2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}
void main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    if(eve(n) == 0){
        printf("The given number %d is even.",n);
    }
    else{
        printf("The given number %d is odd.",n);
    }
}