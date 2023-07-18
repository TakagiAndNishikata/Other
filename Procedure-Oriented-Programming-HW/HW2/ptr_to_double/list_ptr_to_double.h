#ifndef _LIST_PTR_TO_DOUBLE_H_
#define _LIST_PTR_TO_DOUBLE_H_
#include "../mm.h"
#define Type double
#define T "%lf"
struct Node{
	struct Node* pre;
	Type* data;
	struct Node* post;
};
struct Node* createNode(struct Node* thepre,Type* thedata,struct Node* thepost);
void insertFront(struct Node** List,Type* data);
Type* deleteFront(struct Node** List);
Type* deleteBehind(struct Node** List);
void deleteAll(struct Node** List);
void printDoublyLinkedList(struct Node** List);
void printDoublyLinkedListBehind(struct Node** List);
#endif
