//4. Write a C program to check whether a number is even or odd using switch case.
#include<stdio.h>
void main(){
int n1,n2;
printf("Enter your number: ");
scanf("%d",&n1);
n2=n1%2;
switch(n2){
case 0:
    printf("The number you've entered is even."); break;
case 1:
    printf("The number you've entered is odd."); break;
}
printf("\n");
}
