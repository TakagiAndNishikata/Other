#ifndef _STACK_LONG_H_
#define _STACK_LONG_H_
#include "list_long.h"
void StackPush(struct Node** Stack,Type data);
Type StackPop(struct Node** Stack);
void printStack(struct Node** Stack);
void deleteAllStack(struct Node** Stack);
#endif
