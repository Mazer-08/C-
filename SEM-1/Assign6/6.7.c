//7. Write a C program to demonstrate working of increment and decrement operators.
#include<stdio.h>
void main(){
int a;
printf("Enter a: \n");
scanf("%d",&a);

printf("\nValue of a before pre-increment=%d",a);
printf("\nValue of a after pre-increment=%d",++a);
printf("\n");
printf("\nValue of a before post-increment=%d",a);
printf("\nValue of a after post-increment=%d",a++);
printf("\n");
printf("\nValue of a before pre-decrement=%d",a);
printf("\nValue of a after pre-decrement=%d",--a);
printf("\n");
printf("\nValue of a before post-decrement=%d",a);
printf("\nValue of a after post-decrement=%d",a--);
printf("\n\nFinal value of a=%d",a);
printf("\n");
}
