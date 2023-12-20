#include<bits/stdc++.h>
using namespace std;
//DFS Cycle detection
vector<int> vis(100001,-1);
vector<vector<int>> edge(100001);
int ans = -1;
void dfs(int idx,int count,int chk){
    vis[idx] = count;
    for(auto x:edge[idx]){
        if(x!= chk and ans==-1){
            if(vis[x]==-1){
                dfs(x,count+1,idx);
            }else{
                ans = count-vis[x]+1;
                return;
            }
        }
    }
}

main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    dfs(0,0,-1);
    cout<<ans;

}