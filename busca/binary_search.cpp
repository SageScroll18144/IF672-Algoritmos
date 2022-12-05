#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int> & list, int left, int right, int find){
    int mid;
    while(left <= right){
        mid = (left+right)/2;
        if(list[mid] == find) return mid;
        else if(list[mid] < find) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main(){

    return 0;
}