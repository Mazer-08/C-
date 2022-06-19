//1. Given the radius of a circle, write a C program to compute and display its area.
//   Use a symbolic constant to define the pi value.
#include<stdio.h>
 void main(){
  float const pi = 3.14;
  float r,a;

  printf("Enter radius: ");
  scanf("%f",&r);

  a = pi*r*r;

  printf("Area = %.2f",a);
}



