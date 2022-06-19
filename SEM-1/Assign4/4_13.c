//13. C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
void main()
{
    int a1, a2, a3;
    printf("Enter all the three angles of triangle (in degrees): \n");
    scanf("%d %d %d",&a1,&a2,&a3);

    if ((a1+a2+a3)==180){
        printf("The triangle is valid.");
    }
    else{
        printf("The triangle is not valid.");
    }
    printf("\n");

}

