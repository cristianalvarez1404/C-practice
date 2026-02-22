#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

char stack[MAX];
char infix[MAX], posfix[MAX];
int top = -1;

void push(char);
char pop();
int isEmpty();
void inToPost();
int space(char);
void print();
int precedence(char);

int main(){
  printf("Enter the infix expression: ");
  gets(infix);
  
  inToPost();
  print();

  return 0;
}

void inToPost() {
  int i, j = 0;
  char next;
  char symbol;
  for(i = 0; i < strlen(infix); i++) {
    symbol = infix[i];
    //If symbol is not a whitespace
    if(!space(symbol))
    {
      switch(symbol)
      {
        case '(':
          push(symbol);
          break;
        case ')':
          while((next = pop()) != '(')
            posfix[j++] = next;
          break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
          while(!isEmpty() && precedence(stack[top]) >= precedence(symbol))
            posfix[j++] = pop();
          push(symbol);
          break;
        default: // if the symbol is an operand
          posfix[j++] = symbol;
      }
    }
  }
  while(!isEmpty())
    posfix[j++] = pop();
  posfix[j] = '\0';  
}

int space(char c)
{
  //If symbol is a blank space or a tab
  if(c == ' ' || c == '\t')
    return 1;
  else
    return 0;
}

int precedence(char symbol)
{
  switch(symbol)
  {
    case '^':
      return 3;
    case '/':
    case '*':
      return 2;
    case '+':
    case '-':
      return 1;
    default:
      return 0;
  }
}

void print()
{
  int i = 0;
  printf("The equivalent postfix expression is: ");
  while(posfix[i]){
    printf("%c", posfix[i++]);
  }
  printf("\n");
}

void push(char c)
{
  if(top == MAX - 1)
  {
    printf("Stack Overflow\n");
    return; //indicates the end of the function
  }
  top++;
  stack[top] = c;
}

char pop()
{
  char c;
  if(top == -1)
  {
    printf("Stack underflow\n");
    exit(1);
  }
  c = stack[top];
  top = top - 1;
  return c;
}

int isEmpty()
{
  if(top == -1)
    return 1;
  else
    return 0;
}