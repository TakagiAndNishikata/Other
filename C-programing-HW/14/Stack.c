#include<stdio.h>
#include<stdlib.h>

struct node{				//�]�w�`�I 
	int data;				//�s��� 
	struct node *next;		//�s�U�Ӹ`�I����} 
};

void push(int);				//�s�J 
int pop(void);				//���X 
void printstack();
struct node *top; 

int main(){
	printf("Nothing in stack\n");
	while(1){
		printf("Please input the instruction:");
		int opt,value;
		if(scanf("%d",&opt)==EOF){					//�P�_��J���� 
			break;
		}else if(opt==1){							//�s�J 
			scanf("%d",&value);
			printf("push %d into stack\n",value);
			push(value);
		}else if(opt==2){							//���X 
			int num=pop();
			if(num==-1){							//�P�_�^�ǭ� 
				printf("Error pop\n");
			}else{
				printf("pop %d from stack\n",num);
			}
		}
		//�L�X�ثe���|������ 
		printstack();
	}
	return 0;
}

void push(int value){		//�s�J 
	struct node *new=malloc(sizeof(struct node));
	new->data=value; 
	new->next=top;
	top=new;
}

int pop(void){				//���X 
	if(top==NULL){			//�Ytop��NULL,�^��-1 
		return -1;
	}else{
		struct node *temp=top;
		int i=top->data;
		top=top->next;
		free(temp);
		return i;
	}
}

void printstack(){
	struct node *current; 
	current=top;
	if(current==NULL){
		printf("Nothing in stack\n");
	}else{
		for(;current!=NULL;current=current->next){
			printf("*       *\n");
			printf("*%5d  *\n",current->data);
			printf("*       *\n");
			printf("*********\n");
		}
	}
	free(current);
}
