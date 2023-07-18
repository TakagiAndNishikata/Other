#ifndef _LIST_H_
#define _LIST_H_
#include "mm.h"
struct Node{
	struct Node* pre;
	int data;
	struct Node* post;
};
void insertFront(struct Node** List,int data);
int deleteFront(struct Node** List);
int deleteBehind(struct Node** List);
void deleteAll(struct Node** List);
void printDoublyLinkedList(struct Node** List);
void printDoublyLinkedListBehind(struct Node** List);
#endif
