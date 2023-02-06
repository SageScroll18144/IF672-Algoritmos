#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct{
    int length;
    E *list;
}Queue;

Queue queue; 

void create_list(void){
    queue.length = 0;
    queue.list = NULL;
}
void insert(E element){
    queue.list = (E *) realloc(queue.list, (queue.length + 1) * sizeof(E));
    for(int i=queue.length;i>0;i--) queue.list[i] = queue.list[i-1];
    queue.list[0] = element;
    queue.length++;
}
void pop_back(void){
    if(queue.length > 1){
        queue.list = (E *) realloc(queue.list, (queue.length - 1) * sizeof(E));
        queue.length--;
    }else if(queue.length > 0){
        queue.length--;
    }
}

int front(void){
    return queue.list[queue.length-1];
}

void close_list(void){
    free(queue.list);
}