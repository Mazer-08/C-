#include<stdio.h>
void main(){
     int n;
     printf("Enter the no. of rows: ");
     scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j <= n+i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}