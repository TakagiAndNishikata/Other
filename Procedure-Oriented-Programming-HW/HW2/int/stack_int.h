#ifndef _STACK_INT_H_
#define _STACK_INT_H_
#include "list_int.h"
void StackPush(struct Node** Stack,Type data);
Type StackPop(struct Node** Stack);
void printStack(struct Node** Stack);
void deleteAllStack(struct Node** Stack);
#endif
