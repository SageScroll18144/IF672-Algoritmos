#include <stdio.h>
#include <stdlib.h>

void selectionsort(int **v, int size){
    int min, idx_min, tmp;

    for(int i=0;i<size;i++) {
        min = (*v)[i];
        idx_min = i;
        for(int j=i+1;j<size;j++){
            if((*v)[j] < min){
                min = (*v)[j];
                idx_min = j;
            }
        }
        tmp = (*v)[i];
        (*v)[i] = min;
        (*v)[idx_min] = tmp;

    }
}

int main(){ 

    int sz = 5;
    int *a = (int *) malloc(sz*sizeof(int));

    a[0]=5;
    a[1]=4;
    a[2]=3;
    a[3]=2;
    a[4]=1;

    selectionsort(&a, sz);

    for(int i=0;i<sz;i++) printf("%d ", a[i]);
    printf("\n");

    free(a);

    return 0;
}