#ifndef _STACK_H_INCLUDED_
#define _STACK_H_INCLUDED_

#define MAX_STACK_SIZE 10
#define MAX_CHAR_LENGTH 64

typedef int dtype;

dtype stack[MAX_STACK_SIZE];
int top;
dtype id;
dtype *pid;

int is_empty();
int is_full();
int peek();
int push(dtype id);
int pop(dtype *pid);

#endif
