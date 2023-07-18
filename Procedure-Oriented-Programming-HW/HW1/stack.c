#include "stack.h"
void StackPush(struct Node** Stack,int data){
	insertFront(Stack,data);
}
int StackPop(struct Node** Stack){
	if((*Stack) == NULL){
		printf("Stack is empty. Could't pop anything more.\n");
		return -1;
	}else{
		return deleteFront(Stack);
	}
}
void printStack(struct Node** Stack){
	if((*Stack) == NULL){
		printf("Stack is empty.\n");
	}else{
		printf("top: ");
		printDoublyLinkedList(Stack);
		printf("\n");
	}
}
void deleteAllStack(struct Node** Stack){
	deleteAll(Stack);
}
