#include<stdio.h>
void main(){
     int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= i+1; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for (int k = n-1; k > 0; k--)
    {
        for (int l = 1; l <= k ; l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}