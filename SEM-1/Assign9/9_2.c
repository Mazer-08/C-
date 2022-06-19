//2. Write a C program to print all Armstrong numbers between given interval using functions.
#include<stdio.h>
int arm(int n){
    int rem, sum = 0, org = n;
   while(n>0)
   {
       rem = n%10;
       sum += rem*rem*rem;
       n = n/10;
   }
   if(sum == org){
       return 1;
   }
   else{
       return 0;
   }
}
void main(){
    int ll, hl;
    printf("Enter your lower limit: ");
    scanf("%d",&ll);
    printf("Enter your higher limit: ");
    scanf("%d",&hl);
    for(int i = ll+1; i<hl; i++)
    {
        if(arm(i) == 1){
            printf("%d \n",i);
        }
    }
}