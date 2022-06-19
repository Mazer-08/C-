//11.Write a program to perform matrix multiplication by checking the
//compatibility.
#include <stdio.h>
int main(){
    int r1, r2, c1, c2;
    printf("Enter the number of rows of first matrix ");
    scanf("%d", &r1);
    printf("Enter the number of columns of first matrix ");
    scanf("%d", &c1);
    printf("Enter the number of rows first matrix ");
    scanf("%d", &r2);
    printf("Enter the number of columns of first matrix ");
    scanf("%d", &c2);
    if (c1 == r2) {
        printf("enter matrix 1 \n");
        int mat1[r1][c1], i, j;
        for (i = 0; i < r1; i++) 
            for (j = 0; j < c1; j++){
                scanf("%d", &mat1[i][j]);
            }
        int mat2[r2][c2];
        printf("enter matrix 2 \n");
        for (i = 0; i < r2; i++)
            for (j = 0; j < c2; j++){
                scanf("%d", &mat2[i][j]);
            }
        int res[r1][c2];
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                int sum = 0, k;
                for (k = 0; k < c1; k++) 
                    sum = sum + mat1[i][k] * mat2[k][j];
                res[i][j] = sum;
            }
        }
        printf("Result matrix is \n");
        for (i = 0; i < r1; i++){
            for (j = 0; j < c2; j++)
                printf("%d ", res[i][j]);
            printf("\n");
        }
    }
    else{
        printf("Matrix multiplication not possible\n");
    }
    return 0;
}