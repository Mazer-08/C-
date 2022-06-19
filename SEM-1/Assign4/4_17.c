//17. C program that reads four values a,b,c and d from the user and evaluates the
//ratio of (a+b) to (c-d) and prints the result, if (c-d) is not equal to zero.
#include<stdio.h>
void main()
{
    int a,b,c,d,r,deno;
    printf("Enter a,b,c and d respectively: \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    deno=c-d;

    if(deno==0){
        printf("The ratio does not exist for given c and d.");
    }
    else{
        r=((a+b)/deno);
        printf("The ratio is: %d",r);
    }
    printf("\n");
}
