#ifndef _QUEUE_SHORT_H_
#define _QUEUE_SHORT_H_
#include "list_short.h"
void EnQueue(struct Node** Queue,Type data);
Type DeQueue(struct Node** Queue);
void printQueue(struct Node** Queue);
void deleteAllQueue(struct Node** Queue);
#endif
