#include<stdio.h>
int top=-1;
int n;
int arr[];

void push(int v){
    if(top == n-1){
        printf("Stack Overflow\n");
    }
    else{
    top++;
    arr[top] = v;
    }
}

void pop(void){
    if(top == -1){
        printf("Stack Underflow\n");
    }
    else{
    top--;
    }
}

void display(void){
    for(int i=top; i>=0; i--){
        printf("%d\n",arr[i]);
    }
}

void main(){
    printf("Enter the size of your stack: ");
    scanf("%d",&n);
    arr[n];
    int a=1;

    while(a){
        int cmd;
        printf("SELECT NUMBER : PUSH-1/POP-2/DISPLAY-3/END-4:");
        scanf("%d",&cmd);
        switch (cmd)
        {
        case 1:
        {
            int num1;
            printf("Enter number to be pushed: ");
            scanf("%d",&num1);
            push(num1);
            break;
        }
        case 2:{
            int num2;
            pop();
            break;
        }
        case 3:
            display();
            break;

        case 4:
            a=0;
            break;
    
        default:
            printf("Please enter a valid command.\n");
        }
    }
}