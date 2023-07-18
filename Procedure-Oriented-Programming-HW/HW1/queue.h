#ifndef _QUEUE_H_
#define _QUEUE_H_
#include "list.h"
void EnQueue(struct Node** Queue,int data);
int DeQueue(struct Node** Queue);
void printQueue(struct Node** Queue);
void deleteAllQueue(struct Node** Queue);
#endif
