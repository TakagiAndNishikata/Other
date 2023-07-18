#include<stdio.h>
#include<stdlib.h>

struct node{				//設定節點 
	int data;				//存資料 
	struct node *next;		//存下個節點的住址 
};

void push(int);				//存入 
int pop(void);				//取出 
void printstack();
struct node *top; 

int main(){
	printf("Nothing in stack\n");
	while(1){
		printf("Please input the instruction:");
		int opt,value;
		if(scanf("%d",&opt)==EOF){					//判斷輸入結束 
			break;
		}else if(opt==1){							//存入 
			scanf("%d",&value);
			printf("push %d into stack\n",value);
			push(value);
		}else if(opt==2){							//取出 
			int num=pop();
			if(num==-1){							//判斷回傳值 
				printf("Error pop\n");
			}else{
				printf("pop %d from stack\n",num);
			}
		}
		//印出目前堆疊的情形 
		printstack();
	}
	return 0;
}

void push(int value){		//存入 
	struct node *new=malloc(sizeof(struct node));
	new->data=value; 
	new->next=top;
	top=new;
}

int pop(void){				//取出 
	if(top==NULL){			//若top為NULL,回傳-1 
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
