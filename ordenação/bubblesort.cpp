#include <bits/stdc++.h>

using namespace std;

void bubblesort(vector<int> & v){
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v.size();j++){
            if(v[j-1]>v[j]){
                v[j-1] += v[j];
                v[j] = v[j-1] - v[j];
                v[j-1] -= v[j];
            }
        }
    }
}

int main(){
    vector<int> a = {5,4,3,2,1};
    bubblesort(a);
    for(int i=0;i<a.size();i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}