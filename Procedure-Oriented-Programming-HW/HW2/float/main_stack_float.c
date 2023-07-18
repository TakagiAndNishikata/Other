#include "stack_float.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	struct Node* top = NULL;
	int opt = 0;
	Type input;
	printf("This is stack_float.\n");
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
			printf("Input data to push:");
			scanf(T,&input);
			StackPush(&top,input);
		}else if(opt == 2)
			if(top == NULL)
				printf("Stack is empty. Could't pop anything more.\n");
			else
				printf("Pop data "T" from Stack\n", StackPop(&top));
		else if(opt == 3)
			printStack(&top);
		else if(opt != 4)
			printf("Invaild input, please try again.\n");
	}
	deleteAllStack(&top);
	return 0;
}
