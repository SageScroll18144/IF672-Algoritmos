#include <stdio.h>
#include <stdlib.h>

int binary_search(int **v, int size, int element){
    int left = 0;
    int right = size-1;

    while(left<=right){
        int mid = (left+right)/2;

        if((*v)[mid] == element) return mid;
        else if((*v)[mid] < element) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main(){
    int size = 5;
    int *a = (int *)malloc(size*sizeof(int));

    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;

    printf("posição de %d é: %d\n", 1, binary_search(&a, size, 1));

    free(a);

    return 0;
}