#include <stdio.h>
#include <stdlib.h>

#define inf 1000000007

void mergesort(int **v, int size){
    if(size==1) return;

    int *u1 = NULL;
    int *u2 = NULL;

    int tam_u1 = 0;
    int tam_u2 = 0;

    for(int i=0;i<size;i++){
        if(i<size/2) {
            u1 = (int *)realloc(u1, (tam_u1 + 1) * sizeof(int));
            u1[tam_u1++] = (*v)[i];
        }else{
            u2 = (int *)realloc(u2, (tam_u2 + 1) * sizeof(int));
            u2[tam_u2++] = (*v)[i];
        }
    }

    mergesort(&u1, tam_u1);
    mergesort(&u2, tam_u2);

    u1 = (int *)realloc(u1, (tam_u1 + 1) * sizeof(int));
    u1[tam_u1++] = inf;

    u2 = (int *)realloc(u2, (tam_u2 + 1) * sizeof(int));
    u2[tam_u2++] = inf;

    int pointer_1 = 0;
    int pointer_2 = 0;
    for(int i=0;i<(size);i++){
        if(u1[pointer_1]<u2[pointer_2]){
            (*v)[i] = u1[pointer_1];
            pointer_1++;
        }else{
            (*v)[i] = u2[pointer_2];
            pointer_2++;
        }
    }
    free(u1);
    free(u2);
    
}

int main(){
    int size_a = 5;
    int *a = (int *)malloc(size_a * sizeof(int));

    a[0]=5;
    a[1]=4;
    a[2]=3;
    a[3]=2;
    a[4]=1;

    mergesort(&a, size_a);

    for(int i=0;i<size_a;i++) printf("%d ", a[i]);
    printf("\n");

    free(a);

    return 0;
}