//8. Write a C program to illustrate various mathematical functions.(Include 5 math functions).
#include <stdio.h>
#include <math.h>
void main()
{/////////////////////////////////////////////////////////////
    int base, power;
    printf("1.POW FN - Enter value of base: ");
    scanf("%d", &base);
    printf("Enter value of power: ");
    scanf("%d", &power);
    printf("%f", pow(base, power));
///////////////////////////////////////////////////////////////
    float a;
    printf("\n\n2. SQRT FN\n");
    check:
    printf("Please enter a positive number\n");
    scanf("%f", &a);
    (a>0)?printf("Square Root = %f",sqrt(a)):({goto check;});
///////////////////////////////////////////////////////////////
    double intpart,fractpart;
    printf("\n\n3.MODF FN - Enter a float number: ");
    scanf("%f",&a);
    fractpart = modf(a, &intpart);
    printf("Integral part = %lf\n", intpart);
    printf("Fraction Part = %lf\n", fractpart);
///////////////////////////////////////////////////////////////
    printf("\n\n4.CEIL FN - Enter a number: ");
    scanf("%f",&a);
    printf("Smallest integer value greater than or equal to a is = %f", ceil(a));
///////////////////////////////////////////////////////////////
    printf("\n\n5.FLOOR FN - Enter a number: ");
    scanf("%f",&a);
    printf("The largest integer value less than or equal to x = %f", floor(a));
 //////////////////////////////////////////////////////////////
    printf("\n");
}
