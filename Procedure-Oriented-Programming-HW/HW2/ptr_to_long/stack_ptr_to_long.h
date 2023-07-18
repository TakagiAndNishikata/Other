#ifndef _STACK_PTR_TO_LONG_H_
#define _STACK_PTR_TO_LONG_H_
#include "list_ptr_to_long.h"
void StackPush(struct Node** Stack,Type* data);
Type* StackPop(struct Node** Stack);
void printStack(struct Node** Stack);
void deleteAllStack(struct Node** Stack);
#endif
