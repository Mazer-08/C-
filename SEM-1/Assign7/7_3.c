//3. Write a C program to swap first and last digits of a number.
#include<stdio.h>
#include<math.h>
int main(){
  int n1, firstd, lastd;

  printf("Enter the number: ");
  scanf("%d",&n1);

  int b = log10(n1);
  float p = pow(10,b);
  firstd = (n1 / p);
  lastd = (n1 % 10);

 int swapped = (n1 % (int)p);
  swapped = (swapped + (lastd*p));
  swapped = (swapped - lastd);
  swapped = (swapped + firstd);

  printf("%d",swapped);

  printf("\n");
  return 0;
}
