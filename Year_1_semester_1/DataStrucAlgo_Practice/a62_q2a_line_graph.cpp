#include<bits/stdc++.h>
using namespace std;

int nodes, deg1, deg2;
vector<vector<int>> adjm;
vector<bool> vis;

void dfs(int idx){
    vis[idx] = true;
    nodes++;
    if(adjm[idx].size() == 1) deg1++;
    if(adjm[idx].size() == 2) deg2++;
    for(auto x :adjm[idx]){
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
        adjm[a].push_back(b);
        adjm[b].push_back(a);
    }
    int count =0;
    for(int i=0;i<v;i++){
        if(!vis[i]){
            nodes = 0;
            deg1 = 0;
            deg2 = 0;
            dfs(i);
            if ((nodes == 1) || ((deg1 == 2) && (deg2 == nodes - 2))) count++;
        }
    }

    cout<<count;
}