#include "queue_int.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	struct Node* head = NULL;
	int opt = 0;
	Type input;
	printf("This is queue_int.\n");
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
			printf("Input data to enqueue:");
			scanf(T,&input);
			EnQueue(&head,input);
		}else if(opt == 2)
			if(head == NULL)
				printf("Queue is empty. Could't dequeue anything more.\n");
			else
				printf("Dequeue data "T" from queue\n", DeQueue(&head));
		else if(opt == 3)
			printQueue(&head);
		else if(opt != 4)
			printf("Invaild input, please try again.\n");
	}
	deleteAllQueue(&head);
	return 0;
}
