//3. Write a C function that takes a positive integer as input and returns the leading digit in
//its decimal representation. For example, the leading digit of 234567 is 2.
#include<stdio.h>
int lnum(int n){
    while(n>10)
    {
        n = n/10;
    }
    return n;
}
void main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    printf("Leading number : %d",lnum(n));
}