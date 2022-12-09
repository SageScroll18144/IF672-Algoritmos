#include "dynamic_list.h"
#include <stdio.h>
#include <stdlib.h>

void init(dynamic_list *list_){
    (*list_).size = 0;
    (*list_).list = NULL;
}

void free_dl(dynamic_list *list_){
    free((*list_).list);
}

void push(dynamic_list *list_, int element){
    int *tmp = (*list_).list;
    (*list_).list = (int *) realloc((*list_).list, ((*list_).size + 1) * sizeof(int));
    
    if((*list_).list == NULL) {
        printf("\t\t\t*Has some error when the system try alloc a new value*\n\n");
        free(tmp);
        exit(1);
    }
    
    (*list_).list[(*list_).size] = element;
    (*list_).size++;

}

void pop(dynamic_list *list_){
    if((*list_).size > 1){
        int *tmp = (*list_).list;
        (*list_).list = (int *) realloc((*list_).list, ((*list_).size - 1) * sizeof(int));
        
        if((*list_).list == NULL) {
            printf("\t\t\t*Has some error when the system try alloc a new value*\n\n");
            free(tmp);
            exit(1);
        }

        (*list_).size--;
    }
    else if((*list_).size > 0){
        free((*list_).list);
        (*list_).list = NULL;
        (*list_).size--;
    }

}
int get(dynamic_list *list_, int idx){
    if(idx<0||idx>=(*list_).size) {
        printf("\t\t\t*Invalid index*\n\n");
        exit(1);
    }
    return (*list_).list[idx];
}