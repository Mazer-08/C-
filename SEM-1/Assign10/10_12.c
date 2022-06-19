//12.Write a program to print the transpose of a 3*3 matrix.
#include<stdio.h>
int main(){
//inout
    int mat[3][3];
    printf("Enter the matrix: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
//output
    printf("\n");
    printf("Now the Transporse of this matrix is \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}