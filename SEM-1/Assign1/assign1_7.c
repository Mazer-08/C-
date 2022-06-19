#include<stdio.h>
void main()
{
 char a[20];
 //taking input
 printf("Enter your Institute Name: ");
 scanf("%[^\n]s", & a);
 //printing output
 printf("Your institute name is: %s",a);
 printf(".\n");
}
