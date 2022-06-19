//14. C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>
void main()
{
    int a1, a2, a3;
    printf("Enter all the three sides of triangle: \n");
    scanf("%d %d %d",&a1,&a2,&a3);

    if (((a1+a2)>a3) && ((a2+a3)>a1) && ((a3+a1)>a2)){
        printf("The triangle is valid.");
    }
    else{
        printf("The triangle is not valid.");
    }
    printf("\n");

}
