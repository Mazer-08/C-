//8. C program to calculate profit or loss.
#include<stdio.h>
void main()
{
    float cp,sp,p;
    printf("Enter the cost price: ");
    scanf("%f",&cp);
    printf("Enter the selling price: ");
    scanf("%f",&sp);
    p = (sp-cp);

    if (p<0){
       printf("You have suffered a loss of %.1f.",-p);
    }
    else if (p==0){
       printf("Neither loss nor profit.");
    }
    else{
       printf("Congrats! you had a profit of %.1f.",p);
    }
    printf("\n");
}
