#include "list_int.h"
struct Node* createNode(struct Node* thepre,Type thedata,struct Node* thepost){
	struct Node* temp = (struct Node*)Mymalloc(sizeof(struct Node));
	temp->pre=thepre;
	temp->data=thedata;
	temp->post=thepost;
	return temp;
}
void insertFront(struct Node** List,Type data){
	struct Node* temp = createNode(NULL,data,*List);
	if((*List) != NULL)
		(*List) -> pre = temp;
	(*List) = temp;
}
Type deleteFront(struct Node** List){
	if((*List) == NULL)
		exit(1);
	Type returnValue;
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
Type deleteBehind(struct Node** List){
	if((*List) == NULL)
		exit(1);
	struct Node* temp = (*List);
	while(temp->post!=NULL)
		temp = temp->post;
	if(temp->pre!=NULL)
		temp->pre->post=NULL;
	else
		(*List) = NULL;
	Type returnValue = temp -> data;
	Myfree(temp);
	return returnValue;
}
void deleteAll(struct Node** List){
	while((*List) != NULL)
		deleteBehind(List);
}
void printDoublyLinkedList(struct Node** List){
	for(struct Node* current = (*List);current != NULL; current=current->post)
		printf(T" ",current->data);
}
void printDoublyLinkedListBehind(struct Node** List){
	struct Node* temp = (*List);
	while(temp ->post!=NULL)
		temp = temp->post;
	for(struct Node* current = temp;current != NULL; current=current->pre)
		printf(T" ",current->data);
}
