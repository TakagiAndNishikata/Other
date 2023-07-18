#include "stack_ptr.h"
#define stack_ptr_c(T)	\
void StackPush_ptr_##T(struct Node** Stack,T* data,int type){	\
	insertFront_ptr_##T(Stack,data, type);	\
}	\
T* StackPop_ptr_##T(struct Node** Stack){	\
	if((*Stack) == NULL){	\
		printf("Stack is empty. Could't pop anything more.\n");	\
		return NULL;	\
	}else{	\
		return deleteFront_ptr_##T(Stack);	\
	}	\
}	\

stack_ptr_c(char);
stack_ptr_c(short);
stack_ptr_c(int);
stack_ptr_c(long);
stack_ptr_c(float);
stack_ptr_c(double);
