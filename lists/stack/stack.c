#include <stdio.h>
#include "stack.h"


int is_empty()
{
    if (top == -1)
	return 1;
    else
	return 0;
}

int is_full()
{
    if (top == MAX_STACK_SIZE)
	return 1;
    else
	return 0;
}

int peek()
{
    return stack[top];
}

int push(int id)
{
    if (!is_full()) {
	top++;
	stack[top] = id;
	return 0;
    } else {
	return -1;
    }
}

int pop(dtype *pid)
{
    if (!is_empty()) {
	*pid = stack[top];
        top--;
	return 0;
    } else {
	return -1;
    }
}
