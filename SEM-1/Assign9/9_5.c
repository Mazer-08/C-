//5. Write a C program to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int fact(int n){
    int pro = 1;
    if(n == 0){
        return 1;
    }
    pro = n*fact(n-1);
    return pro;
}
void main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int sum = 1;
    printf("Series: \n");
    printf("0! ");
    for(int i = 1; i<n; i++)
    {
        printf("%d! ",i);
        sum += fact(i);
    }
    printf("\nSum of the series is: %d",sum);
}