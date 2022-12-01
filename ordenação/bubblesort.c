#include <stdio.h>
#include <stdlib.h>

void bubblesort(int **v, int size){
    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            if((*v)[j-1] > (*v)[j]){
                (*v)[j-1] += (*v)[j];
                (*v)[j] = (*v)[j-1] - (*v)[j];
                (*v)[j-1] -= (*v)[j];
            }
        }
    }
}

int main(){
    int size = 5;
    int *a = (int *)malloc(size*sizeof(int));

    a[0]=5;
    a[1]=4;
    a[2]=3;
    a[3]=2;
    a[4]=1;

    bubblesort(&a, size);

    for(int i=0;i<size;i++) printf("%d ", a[i]);
    printf("\n");

    free(a);

    return 0;
}