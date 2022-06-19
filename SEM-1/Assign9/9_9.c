//9. Write a C program to find LCM of two numbers using recursion.
#include<stdio.h>
int lcm(int n1, int n2)
{
    static int i = 2;
    static int a = 0;
    if(i>=n1 && i>=n2){
        if(i%n1==0 && i%n2==0){
            return i;
        }
    }
    i++;
    lcm(n1, n2);
}
void main(){
    int n1, n2, a;
    printf("Enter your number: ");
    scanf("%d %d",&n1,&n2);

    int x = lcm(n1, n2);
    printf("The lcm of %d and %d = %d.",n1,n2,x);
}