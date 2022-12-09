#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e3+10;

vector<int> graph[maxn];
bool mark[maxn];

void dfs(int v){
    mark[v] = true;
    for(auto u : graph[v]){
        if(!mark[u]){
            dfs(u);
        }
    }
}

int main(){

    return 0;
}