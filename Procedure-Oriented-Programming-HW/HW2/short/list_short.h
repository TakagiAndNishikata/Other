#ifndef _LIST_SHORT_H_
#define _LIST_SHORT_H_
#include "../mm.h"
#define Type short
#define T "%hd"
struct Node{
	struct Node* pre;
	Type data;
	struct Node* post;
};
struct Node* createNode(struct Node* thepre,Type thedata,struct Node* thepost);
void insertFront(struct Node** List,Type data);
Type deleteFront(struct Node** List);
Type deleteBehind(struct Node** List);
void deleteAll(struct Node** List);
void printDoublyLinkedList(struct Node** List);
void printDoublyLinkedListBehind(struct Node** List);
#endif
