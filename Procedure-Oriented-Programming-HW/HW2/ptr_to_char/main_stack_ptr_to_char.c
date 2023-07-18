#include "stack_ptr_to_char.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	struct Node* top = NULL;
	int opt = 0;
	printf("This is queue_ptr_to_char\n");
	printf("/****************/\n");
	printf("1.Push into Stack\n");
	printf("2.Pop from Stack\n");
	printf("3.Print Stack\n");
	printf("4.Exit\n");
	printf("/****************/\n");
	while(opt != 4){
		printf("Option:");
		scanf("%d", &opt);
		if(opt == 1){
			Type* num = Mymalloc(sizeof(Type));
			printf("Input number to push:");
			scanf(" "T,num);
			StackPush(&top,num);
		}else if(opt == 2){
			if(top == NULL){
				printf("Stack is empty. Could't pop anything more.\n");
			}else{
				Type* temp = StackPop(&top);
				printf("Pop number "T" from Stack\n", *temp);
			}	
		}else if(opt == 3){
			printStack(&top);
		}else if(opt != 4){
			printf("Invaild input, please try again.\n");
		}
	}
	deleteAllStack(&top);
	return 0;
}
