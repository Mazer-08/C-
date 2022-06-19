#include <stdio.h>
#include <stdlib.h>
#define MAX 100
char stack_arr [MAX];
char str[MAX];
int top = 0;
void push(char data)
{
    top++;
    stack_arr [top] = data;
}
char pop()
{
    char value;
    value = stack_arr [top];
    top = top-1;
    return value;
}
int main()
{
    stack_arr[top]='c';
    printf("Enter string:");
    gets(str);
    int i=0;
    while(str[i]!='c')
    {
        if(str[i]==' ')
        {
            printf("INVALID");
            exit (1);
        }
        else
        {
            push(str[i]);
        }
            i++;
        // for(int j=0; j<=i; j++){
        //     printf("%c",stack_arr[j]);
        // }
    }
    i++;
    printf("\n");
    while(stack_arr[top]!='c')
    {
     char next,x;
     next=str[i];
     x=pop();
     if(next!=x)
     {
        printf("INVALID");
        exit (1);
     }
      i++;
    }
   if(str[i]=='\0')
      printf("VALID");
   else
     printf("INVALID");

return 0;
}