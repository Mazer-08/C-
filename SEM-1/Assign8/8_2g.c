#include<stdio.h>
void main(){
     int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j > 0; j--)
        {
            printf("%d ",(j*j));
        }
        printf("\n");
    }
}