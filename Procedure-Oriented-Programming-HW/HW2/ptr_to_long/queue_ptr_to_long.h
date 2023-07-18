#ifndef _QUEUE_PTR_TO_LONG_H_
#define _QUEUE_PTR_TO_LONG_H_
#include "list_ptr_to_long.h"
void EnQueue(struct Node** Queue,Type* data);
Type* DeQueue(struct Node** Queue);
void printQueue(struct Node** Queue);
void deleteAllQueue(struct Node** Queue);
#endif
