//roots of a quad eqn
#include<stdio.h>
#include<math.h>
void main()
{
//variable declaration
    int a,b,c,r1,r2;
//taking input for quadratic equation
    printf("Complete the quadratic equation: ax^2 + bx + c.\n\nEnter the values of a, b and c respectively: ");
    scanf("%d",&a);

    printf("Enter b in (%d)x^2 + bx + c  :  ",a);
    scanf("%d",&b);

    printf("Enter c in (%d)x^2 + (%d)x + c  :  ",a,b);
    scanf("%d",&c);

//output
    if  ((pow(b,2)-(4*a*c))<0) /////////////checking discriminant(b^2-4ac)
      {
         printf("No real solution exists for the above quaratic equation");
      }
    else if ((pow(b,2)-(4*a*c))==0) //////////////checking discriminant
      {
         r1=r2=(-b)/(2*a);
         printf("The roots of the above quadratic equation is %d & %d",r1,r2);
      }
    else
      {
         r1 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
         r2 = (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
         printf("The roots of the above quadratic equation is %d & %d",r1,r2);
      }
    printf("\n");
}
