#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adjm;
vector<bool> vis;

void dfs(int idx){
    vis[idx] = true;
    for(auto &x : adjm[idx]){
        if(!vis[x]){
            dfs(x);
        }
    }
}

main(){
    int v,e;
    cin>>v>>e;

    adjm.resize(v);
    vis.resize(v);

    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        adjm[a].push_back(b);
        adjm[b].push_back(a);
    }
    int count =0;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            count++;
            dfs(i);
        }
    }

    cout<<count;
}