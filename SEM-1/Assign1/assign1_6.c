#include<stdio.h>
void main()
{
 char a[20] ;
 //taking input
 printf("Enter your name: ");
 scanf("%[^\n]s", & a);
 //printing output
 printf("You have registered your name as: %s",a);
 printf(".\n");
}
