//9. C program to input week number and print week day.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    if (n=1){
       printf("Monday");
    }
    else if (n==2){
       printf("Tuesday");
    }
    else if (n==3){
       printf("Wednesday");
    }
    else if (n==4){
       printf("Thursday");
    }
    else if (n==5){
       printf("Friday");
    }
    else if (n==6){
       printf("Saturday");
    }
    else if (n==7){
       printf("Sunday");
    }
    else{
        printf("Please enter a number from 1 to 7.");
    }
    printf("\n");
}
