#include <stdio.h>
#include <stdlib.h>

#define E int

typedef struct Linked_List{
    E element;
    struct Linked_List *next_node;
}linked_list;

int main(){

    linked_list *begin = NULL;
    linked_list *next_node = NULL;

    begin = (linked_list *)malloc(sizeof(linked_list));

    next_node = begin;
    
    int idx=1, flag=1;
    E element;
    printf("tell me which element in node %d.: ", idx);
    while(scanf("%i", &element)!=EOF){//Element E
    
        next_node->element = element;
        next_node->next_node = (linked_list *)malloc(sizeof(linked_list));
        next_node = next_node->next_node;

        idx++;
        printf("tell me which element in node %d.: ", idx);
    }
    next_node->next_node = NULL;

    printf("\nthe linked list has this elements.: [");

    next_node = begin;
    while(next_node!=NULL){
        printf("%i, ", next_node->element);
        next_node = next_node->next_node;
    }
    printf("]\n");

    next_node = begin;
    linked_list *tmp = next_node;
    while(next_node!=NULL){
        next_node = next_node->next_node;
        free(tmp);
        tmp = next_node;
    }

    return 0;
}