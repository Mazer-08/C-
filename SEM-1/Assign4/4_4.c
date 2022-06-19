//4. C program to find minimum between two numbers.
#include<stdio.h>
void main()
{
   int n1,n2;
   printf("Enter number1 and number 2 respectively: \n");
   scanf("%d %d",&n1,&n2);

   if (n1>n2){
       printf("%d is lesser.",n2);
   }
   else if (n2>n1){
       printf("%d is lesser.",n1);
   }
   else{
       printf("The provided numbers are equal.");
   }
   printf("\n");
}
