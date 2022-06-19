//19. C program to find roots of quadratic equation according to nature of discriminant (D = b2-4ac).
#include<stdio.h>
#include<math.h>
void main(){
//variable declaration
    float a,b,c,r1,r2;
//taking input for quadratic equation
    printf("Complete the quadratic equation: ax^2 + bx + c.\n\nEnter the values of a, b and c respectively: ");
    scanf("%f",&a);

    printf("Enter b in (%.0f)x^2 + bx + c  :  ",a);
    scanf("%f",&b);

    printf("Enter c in (%.0f)x^2 + (%.0f)x + c  :  ",a,b);
    scanf("%f",&c);

//output
if  ((pow(b,2)-(4*a*c))<0){
        r1=sqrt((4*a*c)-pow(b,2))/2;
        r2=sqrt((4*a*c)-pow(b,2))/2;
    printf("Imaginary roots exist: \n");
    printf("Root 1 = %.1f + %.1f i\n",-b/2*a,r1);
    printf("Root 2 = %.1f - %.1f i\n",-b/2*a,r2);
      }
else if ((pow(b,2)-(4*a*c))==0){
    r1=r2=(-b)/(2*a);
    printf("The roots of the above quadratic equation is %.1f & %.1f",r1,r2);
      }
else{
    r1 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    r2 = (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    printf("The roots of the above quadratic equation is %.1f & %.1f",r1,r2);
      }
  printf("\n");
}
