//1. Write a C program to read number between 1 to 10 and print it in words
//   using switch case.
#include<stdio.h>
void main(){
int n;
printf("Enter a number: ");
scanf("%d",&n);

switch(n){
case 1:
    printf("One");
    break;
case 2:
    printf("Two");
    break;
case 3:
    printf("Three");
    break;
case 4:
    printf("Four");
    break;
case 5:
    printf("Five");
    break;
case 6:
    printf("Six");
    break;
case 7:
    printf("Seven");
    break;
case 8:
    printf("Eight");
    break;
case 9:
    printf("NIne");
    break;
case 10:
    printf("Ten");
    break;
default:
    if(n<0){printf("No. is lesser than 0.");}
    else{printf("No. is greater than 10.");}
    break;
}
printf("\n");
}
