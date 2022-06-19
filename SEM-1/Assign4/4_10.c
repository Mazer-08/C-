//10. C program to input month number and print number of days in that month.
#include<stdio.h>
void main()
{
    int m;
    printf("Enter month number: ");
    scanf("%d",&m);

    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
       printf("No. of days = 31");
    }
    else if(m==4 || m==6 || m==9 || m==11){
       printf("No. of days = 30");
    }
    else if(m==2){
        printf("No. of days = 28 or 29");
    }
    else{
        printf("Enter a valid month number.");
    }
    printf("\n");
}
