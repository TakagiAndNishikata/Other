#ifndef _MM_H_
#define _MM_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN_ALLOC_SIZE 256
#define BUG_FACILITY_MYMALLOC() printf("^^Test to call Mymalloc in file %s of function %s on line %d^^\n", __FILE__, __FUNCTION__, __LINE__);
#define BUG_FACILITY_MYCALLOC() printf("^^Test to call Mycalloc in file %s of function %s on line %d^^\n", __FILE__, __FUNCTION__, __LINE__);
#define BUG_FACILITY_MYRECALLOC() printf("^^Test to call Myrealloc in file %s of function %s on line %d^^\n", __FILE__, __FUNCTION__, __LINE__);
#define BUG_FACILITY_MYFREE() printf("^^Test to call Myfree in file %s of function %s on line %d^^\n", __FILE__, __FUNCTION__, __LINE__);
#define ALIGN long

typedef union _Header{
    struct{
        union _Header *next;
        size_t size;
    } meta;
    
    ALIGN a;
} Header;

void* Mymalloc(size_t bytes);
void* Mycalloc(size_t num, size_t size);
void* my_realloc(void *ptr, size_t bytes);
void Myfree(void *ptr);

static void* Osalloc(size_t num);
static Header* morecore(size_t num);

#endif
