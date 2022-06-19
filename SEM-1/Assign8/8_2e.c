#include<stdio.h>
int even(int n1){
    if (n1 % 2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}
void main(){
     int n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(even(j) == 0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
}