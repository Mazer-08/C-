#include<stdio.h>
void main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    //sum from 1st to nth term
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int a = i*i;
        sum += a;
    }
    printf("%d\n",sum);
    printf("The value of the sequence upto %d terms = %d",n,sum);
}