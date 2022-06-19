//4. Write a C program to demonstrate working of relational operators.
#include<stdio.h>
void main(){
    int a,b;
    printf("Enter a and b respectively: \n");
    scanf("%d %d",&a,&b);

    // greater than example
    (a>b)?printf("a is greater than b\n"):printf("a is less than or equal to b\n");

    // greater than equal to
    (a>=b)?printf("a is greater than or equal to b\n"):printf("a is lesser than b\n");

    // less than example
    (a<b)?printf("a is less than b\n"):printf("a is greater than or equal to b\n");

    // lesser than equal to
    (a<=b)?printf("a is greater than or equal to b\n"):printf("a is greater than b\n");

    // equal to
    (a==b)?printf("a is equal to b\n"):printf("a is not equal to b\n");

    // not equal to
    (a!=b)?printf("a is not equal to b\n"):printf("a is equal to b\n");

}
