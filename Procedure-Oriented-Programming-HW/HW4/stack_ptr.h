#ifndef STACK_PTR_H
#define STACK_PTR_H
#include "list_ptr.h"
#include "stack.h"
#define stack_ptr_h(T)	\
void StackPush_ptr_##T(struct Node** Stack,T* data,int type);	\
T* StackPop_ptr_##T(struct Node** Stack);

stack_ptr_h(char);
stack_ptr_h(short);
stack_ptr_h(int);
stack_ptr_h(long);
stack_ptr_h(float);
stack_ptr_h(double);
#endif
