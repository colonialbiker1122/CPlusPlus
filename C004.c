//Infix to Postfix Conversion
#include<stdio.h>
#define max 50
char infix[max];
char postfix[max];
char stack[max];
int top = -1;
int position_postfix=0;

int main() {
    int i,j;
    char temp;
    printf("Enter Infix Expression : ");
    gets(infix);
    for(i=0; infix[i] != '\0';i++) {
        if(infix[i] == '^' || infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '(' || infix[i] == ')') {
            top++;
            stack[top] = infix[i];
            do{
                if(stack[top] == stack[top-1] && stack[top] != '(' && stack[top] != ')') {
                    postfix[position_postfix] = stack[top];
                    top--;
                    position_postfix++;
                } else if(stack[top] =='+' && stack[top-1] =='-' || stack[top] =='-' && stack[top-1] =='+' || stack[top] =='/' && stack[top-1] =='*' || stack[top] =='*' && stack[top-1] =='/' || stack[top] == '+' && stack[top-1] == '*' || stack[top] == '+' && stack[top-1] == '/' || stack[top] == '-' && stack[top-1] == '*' || stack[top] == '-' && stack[top-1] == '/' || stack[top] =='+' && stack[top-1] =='^' || stack[top] =='-' && stack[top-1] =='^' || stack[top] =='*' && stack[top-1] =='^' || stack[top] =='/' && stack[top-1] =='^') {
                    temp = stack[top];
                    stack[top] = stack[top-1];
                    stack[top-1] = temp;
                    postfix[position_postfix] = stack[top];
                    top--;
                    position_postfix++;
                } else if ( stack[top] == ')') {
                    top--;
                    for(j=top ; stack[top] != '(' ;j--,top--) {
                        postfix[position_postfix] = stack[top];
                        position_postfix++;
                    }
                    top--;
                }
            } while(stack[top] =='+' && stack[top-1] =='-' || stack[top] =='-' && stack[top-1] =='+' || stack[top] =='/' && stack[top-1] =='*' || stack[top] =='*' && stack[top-1] =='/' || stack[top] == '+' && stack[top-1] == '*' || stack[top] == '+' && stack[top-1] == '/' || stack[top] == '-' && stack[top-1] == '*' || stack[top] == '-' && stack[top-1] == '/' || stack[top] == stack[top-1] && stack[top] != '(' && stack[top] != ')');
        } else if(infix[i] >= 65 && infix[i] <= 90 || infix[i] >= 97 && infix[i] <= 122) {
            postfix[position_postfix] = infix[i];
            position_postfix++;
        }
    }
    while(top >=0) {
        postfix[position_postfix] = stack[top];
        position_postfix++;
        top--;
    }
    printf("postfix value : %s\n",postfix);
    return 0;
}