#include <stdio.h>
#include "stack.h"

void initializeStack(Stack *s)
{
s->top = -1;
}

int isEmpty(Stack *s){
    return (s->top == -1);
}
void push(Stack *s, int value){
    if (!isEmpty(s)) {
        printf("The stack is not empty! can't add %d\n", value);
        return ;
    }
    s->elements[++ s->top] = value;
}
int pop(Stack *s){
    if(isEmpty(s)) {
        printf("the stack is already empty!\n");
        return -1;
    }
    return s->elements[--s->top];
}
