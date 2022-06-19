//6. Write a C program to find roots of a quadratic equation using switch case.
#include<stdio.h>
#include<math.h>
void main(){
 float d,a,b,c,r1,r2;
 int e;
//taking input for quadratic equation
    printf("Complete the quadratic equation: ax^2 + bx + c.\n\nEnter the values of a, b and c respectively: ");
    scanf("%f",&a);
    printf("Enter b in (%.0f)x^2 + bx + c  :  ",a);
    scanf("%f",&b);
    printf("Enter c in (%.0f)x^2 + (%.0f)x + c  :  ",a,b);
    scanf("%f",&c);

    d = (pow(b,2)-(4*a*c))/2;

    if(d<0){e=1;}
    else if(d=0){e=2;}
    else{e=3;}

    switch(e){
      case 1:
          r1=sqrt((4*a*c)-pow(b,2))/2;
          r2=sqrt((4*a*c)-pow(b,2))/2;
          printf("Imaginary roots exist: \n");
          printf("Root 1 = %.1f + %.1f i\n",-b/2*a,r1);
          printf("Root 2 = %.1f - %.1f i\n",-b/2*a,r2);
          break;
      case 2:
          r1=r2=(-b)/(2*a);
          printf("The roots of the above quadratic equation are %.1f & %.1f",r1,r2);
          break;
      case 3:
          r1 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
          r2 = (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
          printf("The roots of the above quadratic equation are %.1f & %.1f",r1,r2);
          break;
      }
    }
