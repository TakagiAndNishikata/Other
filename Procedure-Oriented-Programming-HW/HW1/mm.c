#include "mm.h"
#include "list.h"
struct Node* Mymalloc(struct Node* front,int d, struct Node* behind){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> pre = front;
	temp -> data = d;
	temp -> post = behind;
	return temp;
}
struct Node* Mycalloc(struct Node* front,int d, struct Node* behind){
	struct Node* temp = (struct Node*)calloc(1,sizeof(struct Node));
	temp -> pre = front;
	temp -> data = d;
	temp -> post = behind;
	return temp;
}
struct Node* Myrealloc(struct Node* object){
	return (struct Node*)realloc(object,sizeof(struct Node));
}
void Myfree(struct Node* object){
	free(object);
}
