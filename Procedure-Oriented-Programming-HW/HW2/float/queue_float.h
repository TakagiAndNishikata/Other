#ifndef _QUEUE_FLOAT_H_
#define _QUEUE_FLOAT_H_
#include "list_float.h"
void EnQueue(struct Node** Queue,Type data);
Type DeQueue(struct Node** Queue);
void printQueue(struct Node** Queue);
void deleteAllQueue(struct Node** Queue);
#endif
