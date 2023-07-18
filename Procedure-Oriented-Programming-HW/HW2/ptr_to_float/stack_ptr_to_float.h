#ifndef _STACK_PTR_TO_FLOAT_H_
#define _STACK_PTR_TO_FLOAT_H_
#include "list_ptr_to_float.h"
void StackPush(struct Node** Stack,Type* data);
Type* StackPop(struct Node** Stack);
void printStack(struct Node** Stack);
void deleteAllStack(struct Node** Stack);
#endif
