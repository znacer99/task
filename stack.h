#ifndef STACK_H
#define STACK_H
#define MAXIMUM 300
typedef struct Stack {
    int elements[MAXIMUM];
    int top;
}
Stack;

void initializeStack(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int isEmpty(Stack *s);

#endif
