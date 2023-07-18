#ifndef _STACK_FLOAT_H_
#define _STACK_FLOAT_H_
#include "list_float.h"
void StackPush(struct Node** Stack,Type data);
Type StackPop(struct Node** Stack);
void printStack(struct Node** Stack);
void deleteAllStack(struct Node** Stack);
#endif
