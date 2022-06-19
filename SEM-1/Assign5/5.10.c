//10. Write a C program to check whether character is an alphabet or not using ternary operator.
#include<stdio.h>
 void main(){
  char ch;

  printf("Enter input: ");
  scanf("%c",&ch);

  ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))?printf("Input is an alphabet."):printf("Input is not an alphabet.");

  printf("\n");

}
