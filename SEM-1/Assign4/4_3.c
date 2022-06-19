//3. C program to find maximum between two numbers.
#include<stdio.h>
void main()
{
   int n1,n2;
   printf("Enter number1 and number 2 respectively: \n");
   scanf("%d %d",&n1,&n2);

   if (n1>n2){
       printf("%d is greater.",n1);
   }
   else if (n2>n1){
       printf("%d is greater.",n2);
   }
   else{
       printf("The provided numbers are equal.");
   }
   printf("\n");
}


//2nd approach
/*#include<stdio.h>
#include<math.h>
void main()
{
   int n1,n2,n3,M;
   printf("Enter number 1 and number 2 respectively: \n");
   scanf("%d %d",&n1,&n2);

   printf("%.0f is the greatest",fmax(n1,n2));

}*/

