#include <stdio.h>
#include <stdlib.h>
#include "list.h"

typedef struct Linked_List{
    E element;
    struct Linked_List *next_node;
}linked_list;

linked_list *begin;
linked_list *next_node;
int length;

void create_list(void){
    begin = (linked_list *)malloc(sizeof(linked_list));
    next_node = begin;
    length = 0;
}

void insert(E element){
    next_node->element = element;
    next_node->next_node = (linked_list *)malloc(sizeof(linked_list));
    next_node = next_node->next_node;
    length++;
}

int find(E element){
    int ans = -1, idx = 0;
    next_node = begin;
    while(next_node!=NULL && next_node->element != element){
        next_node = next_node->next_node;
        idx++;
    }
    if(next_node!=NULL) ans = idx;
    return ans;
}

void print_list(void){
    printf("the linked list has this elements.: [");

    int loop = length;
    next_node = begin;
    while(loop--){
        printf("%i, ", next_node->element);
        next_node = next_node->next_node;
    }
    printf("]\n");
}

void remove_node(int idx){
    linked_list *tmp;
    next_node = begin;
    
    for(int i=0;i<idx-1;i++) next_node = next_node->next_node;
    
    if(idx){
        tmp = next_node->next_node;
        next_node->next_node = tmp->next_node;
    }else{
        tmp = next_node;
        begin = next_node->next_node;
    }
    free(tmp);
    length--;
    
}

void close_list(void){
    next_node = begin;
    linked_list *tmp = next_node;
    while(next_node!=NULL){
        next_node = next_node->next_node;
        free(tmp);
        tmp = next_node;
    }
}