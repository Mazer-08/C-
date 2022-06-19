//8. Write a C program to find maximum between three numbers using ternary/conditional operator.
#include<stdio.h>
void main(){
 int r,n1,n2,n3;
  printf("Enter the numbers: \n");
  scanf("%d %d %d",&n1,&n2,&n3);

  r = ((n1>=n2)&&(n1>=n3))?n1:((n2>=n1)&&(n2>=n3))?n2:((n3>=n1)&&(n3>=n2)?n3:printf("Enter valid numbers."));

  printf("The greatest no. is %d",r);
  printf("\n");

}
