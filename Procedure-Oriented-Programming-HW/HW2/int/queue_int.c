#include "queue_int.h"
void EnQueue(struct Node** Queue,Type data){
	insertFront(Queue,data);
}
Type DeQueue(struct Node** Queue){
	if((*Queue) == NULL){
		printf("Queue is empty. Could't dequeue anything more.\n");
		return -1;
	}else{
		return deleteBehind(Queue);
	}
}
void printQueue(struct Node** Queue){
	if((*Queue) == NULL){
		printf("Queue is empty.\n");
	}else{
		printf("head: ");
		printDoublyLinkedListBehind(Queue);
		printf(":tail\n");
	}
}
void deleteAllQueue(struct Node** Queue){
	deleteAll(Queue);
}
