#ifndef _DYNAMIC_LIST_H 
#define _DYNAMIC_LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *list;
    int size;
}dynamic_list;

void init(dynamic_list *list_);
void free_dl(dynamic_list *list_);
void push(dynamic_list *list_, int element);
void pop(dynamic_list *list_);
int get(dynamic_list *list_, int idx);

#endif