//4. A function g is defined as follows
//     g = ax^3 – bx^2 + c^x – d     (if x > k)
//       = 0                      (if x = k)
//       = - ax^3 + bx^2 – cx + d   (if x < k)
//   Display the value of g. Accept a, b, c, d, k and x from user.
#include<stdio.h>
#include<math.h>
int g(int a, int b, int c, int d, int x, int k)
{
    int res;
    if(x>k){
        res = ((a*x*x*x) - (b*x*x) + (c*x) - d);
        return res;
    }
    else if(x == k){
        return 0;
    }
    else{
        res = (-(a*x*x*x) + (b*x*x) - (c*x) + d);
        return res;
    }
}
void main(){
   int a,b,c,d,x,k;
   printf("Enter value of a, b, c, d respectively : ");
   scanf("%d %d %d %d",&a,&b,&c,&d);
   printf("Enter value of k, x: ");
   scanf("%d %d",&k,&x);
  
   printf("g(x) = %dx^3 - %dx^2 + %d^x - %d     (if %d > %d)\n",a,b,c,d,x,k);
   printf("g(x) = 0                         (if %d = %d)\n",x,k);
   printf("g(x) = -%dx^3 + %dx^2 - %d^x + %d    (if %d < %d)\n",a,b,c,d,x,k);
   
   printf("The answer is: %d",g(a, b, c, d, x, k));
}