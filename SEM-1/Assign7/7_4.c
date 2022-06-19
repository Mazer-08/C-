//4. Write a C program to enter a number and print its reverse.
#include<stdio.h>
#include<math.h>
int digit(int n1){
 int i=1;
 do{                       
    n1 = n1/10;      
    i = i + 1;       
    }
   while(n1 >= 10);
   return i;
}
void main(){
    int n;
   printf("Enter a number: ");
   scanf("%d",&n);                               

   int a = digit(n);                             
   int p = a;

   int new[a];
   for(int i=0; i<a; i++){     
    new[i] = n%10;
    printf("%d",new[i]) ;                  
    n = n/10;                         
   }                                 
}
