#ifndef _STACK_DOUBLE_H_
#define _STACK_DOUBLE_H_
#include "list_double.h"
void StackPush(struct Node** Stack,Type data);
Type StackPop(struct Node** Stack);
void printStack(struct Node** Stack);
void deleteAllStack(struct Node** Stack);
#endif
