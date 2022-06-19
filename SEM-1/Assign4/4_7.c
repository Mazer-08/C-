//7. C program to check whether a person is eligible to vote or not.
#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age<18 && age>0 ){
       printf("You are not eligible to vote.");
    }
    else if(age<0){
        printf("Please enter a valid age.");
    }
    else{
       printf("You are eligible to vote provided that you have a voter ID.");
    }
    printf("\n");
}
