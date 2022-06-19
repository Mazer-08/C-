//C program to read user’s choice between 1 to 5 and print the color selected by user.
//The choices for color given to user is given below:
//1-Yellow, 2-Red, 3-Green, 4-Blue, 5-White
#include<stdio.h>
 void main()
{
    int n;
    printf("Enter a number from 1 to 5: ");
    scanf("%d",&n);

    if(n==1){
        printf("Yellow");
    }
    else if(n==2){
        printf("Red");
    }
    else if(n==3){
        printf("Green");
    }
    else if(n==4){
        printf("Blue");
    }
    else if(n==5){
        printf("White");
    }
    else{
        printf("Enter a valid number.");
    }
    printf("\n");
}

