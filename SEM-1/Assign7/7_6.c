//6. Write a C program to find HCF (Highest Common Factor) (GCD) of two numbers.
#include<stdio.h>
void main(){
  int a,b,i,ans;
  printf("Enter your numbers: \n");
  scanf("%d %d",&a,&b);

    for(i=1; (i<=a && i<=b); i++){
      if((a%i==0) && (b%i==0)){
        ans = i;
      }

    }
   printf("The H.C.F. of %d and %d is %d.",a,b,ans);
   printf("\n");
}
