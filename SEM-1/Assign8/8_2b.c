#include<stdio.h>
void main(){
     int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        for (int k = 0; k < i-1; k++)
        {
            printf("*");
        }
        for (int l = 0; l < n-i; l++)
        {
            printf(" ");
        }
        printf("\n");
    }    
}
