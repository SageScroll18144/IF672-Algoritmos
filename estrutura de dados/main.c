#include <stdio.h>
#include "list.h"

int main(){

    create_list();

    
    insert(10);
    insert(14);
    insert(13); 

    // printf("front: %d\n", front());
    // pop_back();
    // printf("front: %d\n", front());


    printf("top: %d\n", top());
    pop_back();
    printf("top: %d\n", top());


    // print_list();

    // printf("%d\n", find(14));
    // remove_node(0);
    // print_list();

    close_list();
    
    return 0;
}