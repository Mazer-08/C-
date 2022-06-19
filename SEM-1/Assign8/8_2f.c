#include<stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
        if(j==1 || j==i-1){
            printf("1");
        }
        else if(j>1 && j<i-1){
            printf("0");
            }
        }
        printf("\n");
    }
    for(int k=1;k<=n;k++){
        printf("1");
    }
return 0;
}