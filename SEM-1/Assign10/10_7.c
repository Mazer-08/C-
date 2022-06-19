// 7. Write a program to add and subtraction corresponding elements of two
//    1-D array and store in third array.
#include<stdio.h>
int main(){
//input
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n],arr1[n],sum[n],diff[n];
    printf("Enter the elements of respective arrays: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        scanf("%d",&arr1[i]);
    }
//sum and diff calculation
    for(int i=0; i<n; i++){
        sum[i]=arr[i]+arr1[i];
    }
    for(int i=0; i<n; i++){
        diff[i]=arr[i]-arr1[i];
    }
//output
    printf("SUM : ");
    for(int i=0; i<n; i++){
        printf("%d ",sum[i]);
    }
    printf("\nDIFFERENCE : ");

    for(int i=0; i<n; i++){
        printf("%d ",diff[i]);
    }
}