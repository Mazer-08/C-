#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    //sum from 2nd to the last term
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        float p = pow(-1, i);
        sum += i*i*(int)p;
    }
    //corner cases
    if(n==0)
    {
        sum = 0;
        printf("The value of the sequence upto %d terms = %d",n,sum);
    }
    else if(n==1)
    {
        sum = 1;
        printf("The value of the sequence upto  %d terms = %d",n,sum);
    }
    else
    {
        sum += 1;
        printf("The value of the sequence upto %d terms = %d",n,sum); 
    }
    
}