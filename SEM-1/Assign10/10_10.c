//10.Write a program to perform 3*3 matrix addition and matrix subtraction.

#include<stdio.h>
int main(){
//input
    int m1[3][3],m2[3][3];
    printf("Enter your 1st matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter your 2nd matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&m2[i][j]);
        }
    }
//adition and subtraction matrix
    printf("\n");
    int sumarr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sumarr[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("\n");
    int subarr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            subarr[i][j]=m1[i][j]-m2[i][j];
        }
    }
//output
    printf("SUM\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sumarr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("DIFFERENCE\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",subarr[i][j]);
        }
        printf("\n");
    }
}