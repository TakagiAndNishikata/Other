#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char opt[10] = "";
	struct Node* head = NULL;
	int num = 0;
	printf("/************************/\n");
	printf("Enqueue: type 'Enqueue' or 'enqueue'\n");
	printf("Dequeue: type 'Dequeue' or 'dequeue'\n");
	printf("Print Queue: type 'Print' or 'print'\n");
	printf("Exit: type 'Exit' or 'exit'\n");
	printf("/************************/\n");
	while(strcmp(opt,"Exit") != 0 && strcmp(opt,"exit") != 0){
		printf("Option:");
		scanf("%s", opt);
		if(strcmp(opt,"Enqueue") == 0 || strcmp(opt,"enqueue") == 0){
			printf("Input number to enqueue:");
			scanf("%d",&num);
			EnQueue(&head,num);
		}else if(strcmp(opt,"Dequeue") == 0 || strcmp(opt,"dequeue") == 0){
			if(head == NULL){
				printf("Queue is empty. Could't dequeue anything more.\n");
			}else{
				num = DeQueue(&head);
				printf("Dequeue number %d from Stack\n", num);
			}	
		}else if(strcmp(opt,"Print") == 0 || strcmp(opt,"print") == 0){
			printQueue(&head);
		}else if(!(strcmp(opt,"Exit") == 0 || strcmp(opt,"exit") == 0)){
			printf("Invaild input, please try again.\n");
		}
	}
	deleteAllQueue(&head);
	return 0;
}
