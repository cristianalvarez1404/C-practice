#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 100

int stack[MAX];
char infix[MAX], postfix[MAX];
int top = -1;

void push(int);
int pop();
int isEmpty();
void inToPost();
int space(char);
void print();
int precedence(char);
int post_eval();

int main()
{
  int result;
  printf("Enter the infix expression: ");
  gets(infix);

  inToPost();
  result = post_eval();
  print();
  printf("The result obtained after postfix evaluation is: ");
  printf("%d\n", result);
  return 0;
}

void inToPost()
{
  int i, j=0;
  char next;
  char symbol;
  for(i=0; i<strlen(infix); i++) {
    symbol = infix[i];

    if(!space(symbol))
    {
      switch(symbol)
      {
        case '(':
          push(symbol);
          break;
        case ')':
          while((next = pop()) != '(')
            postfix[j++] = next;
          break;
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
          while(!isEmpty() && precedence(stack[top]) >= precedence(symbol))
            postfix[j++] = pop();
          push(symbol);
          break;
        default:
          postfix[j++] = symbol;
      }
    }
  }
  while(!isEmpty())
    postfix[j++] = pop();
  postfix[j] = '\0';
}

int space(char c)
{
  // If symbol is a blank space or a tab
  if(c == ' ' || c == '\t')
    return 1;
  else
    return 0;
}

int precedence(char symbol)
{
  switch(symbol)
  {
    //Higher value means greater precedence
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
  printf("The equivalent postfix expression is: ");
  while(postfix[i]) {
    printf("%c", postfix[i++]);
  }
  printf("\n");
}

void push(int val)
{
  if(top == MAX - 1)
  {
    printf("Stack Overflow\n");
    return;
  }
  top++;
  stack[top] = val;
}

int pop()
{
  int val;
  if(top == -1)
  {
    printf("Stack underflow\n");
    exit(1);
  }
  val = stack[top];
  top = top - 1;
  return val;
}

int isEmpty()
{
  if(top == -1)
    return 1;
  else
    return 0;
}

int power(int a, int b)
{
  int i, mult = 1;
  for(i = 0; i < b; i++)
    mult *= a;
  return mult;
}

int post_eval()
{
  int i;
  int a, b;
  for(i = 0; i < strlen(postfix); i++) {
    //If the symbol is an operand
    if(postfix[i] >= '0' && postfix[i] <= '9') {
      push(postfix[i] - '0');
    }
    else {
      //Pop the topmost symbols
      a = pop();
      b = pop();

      switch(postfix[i]) {
        case '+':
          push(b + a); break;
        case '-':
          push(b - a); break;
        case '*':
          push(b * a); break;
        case '/':
          push(b / a); break;
        case '^':
          push(pow(b, a)); break;
      }
    }
  }
  return pop();
}