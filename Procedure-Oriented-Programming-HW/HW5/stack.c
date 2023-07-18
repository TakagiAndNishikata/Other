#include "stack.h"
#define stack_c(T)	\
void StackPush_##T(struct Node** Stack,T data,int type){	\
	insertFront_##T(Stack,data, type);	\
}	\
T StackPop_##T(struct Node** Stack){	\
	if((*Stack) == NULL){	\
		printf("Stack is empty. Could't pop anything more.\n");	\
		return -1;	\
	}else{	\
		return deleteFront_##T(Stack);	\
	}	\
}	\

stack_c(char);
stack_c(short);
stack_c(int);
stack_c(long);
stack_c(float);
stack_c(double);

void deleteAllStack(struct Node** Stack){
	while((*Stack)){
		switch((*Stack)->type){
			case 0:
				StackPop_char(Stack); break;
			case 1:
				StackPop_short(Stack); break;
			case 2:
				StackPop_int(Stack); break;
			case 3:
				StackPop_long(Stack); break;
			case 4:
				StackPop_float(Stack); break;
			case 5:
				StackPop_double(Stack); break;
		}
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

