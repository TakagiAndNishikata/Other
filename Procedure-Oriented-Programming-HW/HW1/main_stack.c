#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char opt[10] = "";
	struct Node* top = NULL;
	int num = 0;
	printf("/*****************************/\n");
	printf("Push into Stack: type 'Push' or 'push'\n");
	printf("Pop from Stack: type 'Pop' or 'pop'\n");
	printf("Print Stack: type 'Print' or 'print'\n");
	printf("Exit: type 'Exit' or 'exit'\n");
	printf("/*****************************/\n");
	while(strcmp(opt,"Exit") != 0 && strcmp(opt,"exit") != 0){
		printf("Option:");
		scanf("%s", opt);
		if(strcmp(opt,"Push") == 0 || strcmp(opt,"push") == 0){
			printf("Input number to push:");
			scanf("%d",&num);
			StackPush(&top,num);
		}else if(strcmp(opt,"Pop") == 0 || strcmp(opt,"pop") == 0){
			if(top == NULL){
				printf("Stack is empty. Could't pop anything more.\n");
			}else{
				num = StackPop(&top);
				printf("Pop number %d from Stack\n", num);
			}	
		}else if(strcmp(opt,"Print") == 0 || strcmp(opt,"print") == 0){
			printStack(&top);
		}else if(!(strcmp(opt,"Exit") == 0 || strcmp(opt,"exit") == 0)){
			printf("Invaild input, please try again.\n");
		}
	}
	deleteAllStack(&top);
	return 0;
}
