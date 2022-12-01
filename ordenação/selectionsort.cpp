#include <bits/stdc++.h>

using namespace std;

void selectionsort(vector<int> & v){
    int min, idx_min, tmp;
    for(int i=0;i<v.size();i++){
        min = v[i];
        idx_min = i;
        for(int j=i+1;j<v.size();j++){
            if(v[j]<min){
                min = v[j];
                idx_min = j;
            }
        }

        tmp = v[i];
        v[i] = min;
        v[idx_min] = tmp;

    }
}

int main(){

    vector<int> a = {5,4,3,2,1};
    selectionsort(a);
    for(int i=0;i<a.size();i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}