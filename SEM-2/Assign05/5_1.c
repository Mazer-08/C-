#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>
char stack[100];
int top = -1;

void push(char elem){  
top += 1;
stack[top] = elem;
}

char pop(){
return (stack[top--]);
}

int precedence(char symbol){
if (symbol == '^'){
    return (3);
}
else if (symbol == '*' || symbol == '/'){
    return (2);
}
else if (symbol == '+' || symbol == '-'){ 
    return (1);
}
else{
    return (0);
}
}

int main(){
    char infix[100], postfix[100], ch, elem, flag=0;
    int i = 0, k = 0;
    printf("Enter Infix Expression : ");
    scanf("%s", infix); 
    push('$');
    while ((ch = infix[i++]) != '\0'){
        if (ch == '('){
            if(flag == 1){
                printf("wrong input");
                exit(0);
            }
            flag = 1;
            push(ch);
        }
        else if (isalnum(ch))
            postfix[k++] = ch;
        else if (ch == ')'){
            if(flag == 0){
                printf("wrong input");
                exit(0);
            }
            flag = 0;
            while (stack[top] != '(')
                postfix[k++] = pop();
                elem = pop(); 
        }
        else{ /* Operator */
            while (precedence(stack[top]) >= precedence(ch))
                postfix[k++] = pop();
            push(ch);
        }
    }
    while (stack[top] != '$') 
        postfix[k++] = pop();
    postfix[k] = '\0'; 
    printf("\nPostfix Expression = %s\n\n", postfix);
    return 0;
}