#ifndef STACK_H
#define STACK_H
#include "list.h"
#define stack_h(T)	\
void StackPush_##T(struct Node** Stack,T data,int type);	\
T StackPop_##T(struct Node** Stack);	\

stack_h(char);
stack_h(short);
stack_h(int);
stack_h(long);
stack_h(float);
stack_h(double);

void deleteAllStack(struct Node** Stack);
void printStack(struct Node** Stack);

#endif
