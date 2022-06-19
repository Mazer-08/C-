//10. Implement a function named as flip; which will take a number as input and flip its 
// last N digits.For example flip(123, 2)= 132 ; (here N=2) flip(12345,3)= 12543 (here N=3).
#include <stdio.h>
#include <math.h>

int flip(int n,int a){
    double t = pow(10, a);
    int r = n % (int)t;
    n = n - r; 
    for (int i = 0; i < a; i++)
    {
        int j = r % 10;
        double m = pow(10, a - i - 1);
        n = n + m * j;
        r = r / 10;
    }
    return n;
}
int main()
{
    int n, a;
    printf("Enter the number and last n digits to be reversed: ");
    scanf("%d %d", &n, &a);
    printf("%d",flip(n,a));
}