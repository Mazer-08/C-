//18. C program to evaluate the arithmetic expression ((a + b / c * d - e) * (f - g)), if (a + b / c *d - e)
// and (f-g) are not equal to zero. Read the values a, b, c, d, e, f, g from the standard input device.
#include<stdio.h>
void main()
{
    int a,b,c,d,e,f,g,nume,deno;
    printf("Enter a,b,c,d,e,f and g respectively: \n");
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
    nume=((a+((b/c)*d))-e);
    deno=(f-g);

    if(nume==0 || deno==0){
        printf("No output. Try again");
    }
    else{
        printf("The value of the expression is: %d",(nume/deno));
    }
    printf("\n");
}
