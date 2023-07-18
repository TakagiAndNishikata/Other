#include "queue_ptr_to_char.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	struct Node* head = NULL;
	int opt = 0;
	printf("This is queue_ptr_to_char\n");
	printf("/************/\n");
	printf("1.Enqueue\n");
	printf("2.Dequeue\n");
	printf("3.Print Queue\n");
	printf("4.Exit\n");
	printf("/************/\n");
	while(opt != 4){
		printf("Option:");
		scanf("%d", &opt);
		if(opt == 1){
			Type* num = Mymalloc(sizeof(Type));
			printf("Input number to enqueue:");
			scanf(" "T,num);
			EnQueue(&head,num);
		}else if(opt == 2){
			if(head == NULL){
				printf("Queue is empty. Could't dequeue anything more.\n");
			}else{
				Type* temp = DeQueue(&head);
				printf("Dequeue number "T" from queue\n", *temp);
			}	
		}else if(opt == 3){
			printQueue(&head);
		}else if(opt != 4){
			printf("Invaild input, please try again.\n");
		}
	}
	deleteAllQueue(&head);
	return 0;
}
