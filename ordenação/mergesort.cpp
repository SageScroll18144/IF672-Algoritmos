#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9+7;

void mergesort(vector<int> & v){
    if(v.size()==1) return;

    vector<int> u1, u2;
    for(int i=0;i<v.size();i++){
        if(i<v.size()/2) u1.push_back(v[i]);
        else u2.push_back(v[i]);
    }

    mergesort(u1);
    mergesort(u2);

    u1.push_back(inf);
    u2.push_back(inf);

    int pointer_1=0, pointer_2=0;
    for(int i=0;i<v.size();i++){
        if(u1[pointer_1]<u2[pointer_2]){
            v[i]=u1[pointer_1];
            pointer_1++;
        }
        else{
            v[i]=u2[pointer_2];
            pointer_2++;
        }
    }
}

int main(){
    vector<int> a = {5,4,3,2,1};
    mergesort(a);
    for(int i=0;i<a.size();i++) printf("%d ", a[i]);
    printf("\n");

    return 0;
}