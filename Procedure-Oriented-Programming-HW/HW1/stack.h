#ifndef _STACK_H_
#define _STACK_H_
#include "list.h"
void StackPush(struct Node** Stack,int data);
int StackPop(struct Node** Stack);
void printStack(struct Node** Stack);
void deleteAllStack(struct Node** Stack);
#endif
