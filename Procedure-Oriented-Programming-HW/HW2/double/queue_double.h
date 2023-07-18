#ifndef _QUEUE_DOUBLE_H_
#define _QUEUE_DOUBLE_H_
#include "list_double.h"
void EnQueue(struct Node** Queue,Type data);
Type DeQueue(struct Node** Queue);
void printQueue(struct Node** Queue);
void deleteAllQueue(struct Node** Queue);
#endif
