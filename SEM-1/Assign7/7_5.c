//5. Write a C program to print all ASCII character with their values.
#include<stdio.h>
int main ()
{
    for(int j=0; j<=255; j++)
    {

    printf("Ascii value of %c is %d.\n", j , j);
    }
}