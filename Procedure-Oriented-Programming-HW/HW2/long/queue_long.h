#ifndef _QUEUE_LONG_H_
#define _QUEUE_LONG_H_
#include "list_long.h"
void EnQueue(struct Node** Queue,Type data);
Type DeQueue(struct Node** Queue);
void printQueue(struct Node** Queue);
void deleteAllQueue(struct Node** Queue);
#endif
