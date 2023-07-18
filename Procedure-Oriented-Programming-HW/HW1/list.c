#include "list.h"
void insertFront(struct Node** List,int data){
	struct Node* temp = Mymalloc(NULL,data,*List);
	if((*List) != NULL)
		(*List) -> pre = temp;
	(*List) = temp;
}
int deleteFront(struct Node** List){
	if((*List) == NULL)
		exit(1);
	int returnValue = 0;
	if((*List) -> post == NULL){
		returnValue = (*List) -> data;
		Myfree(*List);
		(*List) = NULL;
	}else{
		struct Node* temp = (*List);
		returnValue = temp -> data;
		(*List) = (*List) -> post;
		(*List) -> pre = NULL;
		Myfree(temp);
	}
	return returnValue;
}
int deleteBehind(struct Node** List){
	if((*List) == NULL)
		exit(1);
	struct Node* temp = (*List);
	while(temp->post!=NULL)
		temp = temp->post;
	if(temp->pre!=NULL)
		temp->pre->post=NULL;
	else
		(*List) = NULL;
	int returnValue = temp -> data;
	Myfree(temp);
	return returnValue;
}
void deleteAll(struct Node** List){
	while((*List) != NULL)
		deleteBehind(List);
}
void printDoublyLinkedList(struct Node** List){
	for(struct Node* current = (*List);current != NULL; current=current->post)
		printf("%d ",current->data);
}
void printDoublyLinkedListBehind(struct Node** List){
	struct Node* temp = (*List);
	while(temp ->post!=NULL)
		temp = temp->post;
	for(struct Node* current = temp;current != NULL; current=current->pre)
		printf("%d ",current->data);
}
