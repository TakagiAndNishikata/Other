#ifndef _MM_H
#define _MM_H
#include <stdio.h>
#include <stdlib.h>
void *Mymalloc(size_t size);
void *Mycalloc(size_t nitems,size_t size);
void *Myrealloc(void *ptr,size_t size);
void Myfree(void *ptr);
#endif
