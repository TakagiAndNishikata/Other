#ifndef _MM_H_
#define _MM_H_
#include <stdio.h>
#include <stdlib.h>
#include "list.h"
struct Node;
struct Node* Mymalloc(struct Node* front, int data, struct Node* behind);
struct Node* Myrealloc(struct Node* object);
struct Node* Mycalloc(struct Node* front, int data, struct Node* behind);
void Myfree(struct Node* object);
#endif // _MM_H_
