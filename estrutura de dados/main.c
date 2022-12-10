#include <stdio.h>
#include "dynamic_list.h"

int main(){

    dynamic_list a;
    init(&a);

    push(&a, 54);
    printf("idx: %d\n", get(&a, 0));

    free_dl(&a);

    dynamic_list graph[100];
    
    return 0;
}