//5. C program to find maximum between three numbers
#include<stdio.h>
void main()
{
   int n1,n2,n3;
   printf("Enter number 1, number 2 and number 3 respectively: \n");
   scanf("%d %d %d",&n1,&n2,&n3);

   if ((n1>=n2) && (n1>=n3)){
       printf("%d is greatest.",n1);
   }
   else if ((n2>=n1) && (n2>=n3)){
       printf("%d is greatest.",n2);
   }
   else if ((n3>=n2) && (n3>=n1)){
       printf("%d is greatest.",n3);
   }
   else {
    printf("Enter three different numbers.");
   }
   printf("\n");
}


