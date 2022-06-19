//11. For the flip function in Q-10, verify that flip(flip(N,k), k)= N.
#include<stdio.h>
#include<math.h>

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

int main(){
    int n1,n2;
    printf("Enter number and no. of digits: ");
    scanf("%d %d",&n1,&n2);
    int first=flip(n1,n2);
    printf("Number after 1st flip: %d\n",first);
    int second=flip(first,n2);
    printf("Number after 2nd flip: %d\n",second);
}