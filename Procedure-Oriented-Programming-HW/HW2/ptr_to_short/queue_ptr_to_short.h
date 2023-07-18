#ifndef _QUEUE_PTR_TO_SHORT_H_
#define _QUEUE_PTR_TO_SHORT_H_
#include "list_ptr_to_short.h"
void EnQueue(struct Node** Queue,Type* data);
Type* DeQueue(struct Node** Queue);
void printQueue(struct Node** Queue);
void deleteAllQueue(struct Node** Queue);
#endif
