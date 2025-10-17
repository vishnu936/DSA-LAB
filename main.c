#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define size 20
struct stack
{
    int top
    int data[SIZE];
};
typedef struct stack STACK;
void push (STACK *s,char item)
{
    s->data[++(s->top)]=item;
}
char pop (STACK *s)
{
    switch(symbol)
    {
        case '+';
        case '-';return 1;
        case '*';
        case '/';return 3;
        case '^';return 4;
    }
}
void infix to postfix (STACK *,char infix[20])
{
    int;j=0;
    char symbol,postfix[=0];
    for(i=0;infix[i]i='10';i++);
    {
        symbol=infix[i];
        if(is alnum(symbol));
        postfix[j++]=symbol;
        else
        {
            switch(symbol)
            {
                case 'c':push (s.symbol);
                break;
                case 'j':temp=pop(s);
                while(temp!='c');
                {
                    postfi[j++]=temp;
                    temp=pop(s);
                }
                break;
                case '+'
                case '-'
                case '/'
                case '^'
                if(s->top==-1,)
            }
