#include "bits/stdc++.h"
using namespace std;
int n,e,k;
vector<int> v[100001];
void dfs(int i, int dep, vector<bool> &vis) {
    vis[i]=1;
    if(dep<k)
        for(auto &j:v[i]){
           dfs(j, dep + 1, vis); 
        }
}

main() {
    cin>>n>>e>>k;
    while(e--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<int> deg;
    for(int i=0;i<n;i++) {
        vector<bool> vis(100001);
        dfs(i,0,vis);
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(vis[j] == 1)cnt++;
        }
        deg.push_back(cnt);
    }
    cout<<*max_element(deg.begin(), deg.end());
}
