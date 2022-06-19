//11. Write a C program to check whether a number is even or odd using goto statement.
#include<stdio.h>
  void main(){
  int n,n1;
  printf("Enter your number ");
  scanf("%d",&n);
  n1=n%2;
  if(n1==0){goto even;}
  else{goto odd;}

  even:
      printf("The number is even.");
  odd:
      printf("The number is odd.");

  printf("\n");
}
