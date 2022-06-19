//8. Write c program to sort 1-D array in ascending and descending order.
#include <stdio.h>
int main(){
//input
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
//sorting
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
//output
    printf("Ascending order: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nDescending order: ");
    for (int i = n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}