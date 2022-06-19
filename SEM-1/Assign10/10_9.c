//9. Write c program to generate 10 elements in 
//Fibonacci series and store them in 1-D array.
#include <stdio.h>
int main(){
//generating series
    int arr[10];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < 10; i++){
        arr[i] = arr[i - 2] + arr[i - 1];
    }
//output
    printf("Sequence:\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}