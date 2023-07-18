#include "mm.h"
void *Mymalloc(size_t size){
	return malloc(size);
}
void *Mycalloc(size_t nitems,size_t size){
	return calloc(nitems,size);
}
void *Myrealloc(void *ptr,size_t size){
	return realloc(ptr,size);
}
void Myfree(void *ptr){
	free(ptr);
}
