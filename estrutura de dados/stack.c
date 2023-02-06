#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct{
    int length;
    E *list;
}Stack;

Stack stack; 

void create_list(void){
    stack.length = 0;
    stack.list = NULL;
}
void insert(E element){
    stack.list = (E *) realloc(stack.list, (stack.length + 1) * sizeof(E));
    stack.list[stack.length++] = element;
}
void pop_back(void){
    if(stack.length > 1){
        stack.list = (E *) realloc(stack.list, (stack.length - 1) * sizeof(E));
        stack.length--;
    }else if(stack.length > 0){
        stack.length--;
    }
}

int top(void){
    return stack.list[stack.length-1];
}

void close_list(void){
    free(stack.list);
}