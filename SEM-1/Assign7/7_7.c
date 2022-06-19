//7. Write a C program to find LCM (Lowest Common Multiple) of two numbers.
#include<stdio.h>
int hcf(int a, int b){
 int ans,i;
 for(i=1; (i<=a && i<=b); i++){
      if((a%i==0) && (b%i==0)){
        ans = i;
      }

    }
  return ans;
}
void main(){
    int n1, n2, lcm;
   printf("Enter your numbers: \n");
   scanf("%d %d",&n1,&n2);
   lcm = ((n1*n2)/hcf(n1, n2));
   printf("The L.C.M. of the given numbers is %d.",lcm);
   printf("\n");
}
