//14. Write a C program to print all Strong numbers between 1 to n. [Example: Strong number - 145 = 1! + 4! + 5! ]
#include<stdio.h>
int factorial(int n1){
    int pro = 1;
 for(int i=n1; i>0; i--){
    pro *= i;
   }
 return pro;
}
void main(){
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   printf("Following are the Strong numbers between 1 and %d : \n",n);
  
   int rem;
   for (int i = 2; i < n; i++){
      int p = i, sum = 0;
      while(p>0){
        rem = p%10;
        p = p/10;
        sum = factorial(rem) + sum;
      }
      if(i==sum){
        printf("%d\n",i);
      }
   }
   printf("\n");
}
