#ifndef _QUEUE_PTR_TO_FLOAT_H_
#define _QUEUE_PTR_TO_FLOAT_H_
#include "list_ptr_to_float.h"
void EnQueue(struct Node** Queue,Type* data);
Type* DeQueue(struct Node** Queue);
void printQueue(struct Node** Queue);
void deleteAllQueue(struct Node** Queue);
#endif
