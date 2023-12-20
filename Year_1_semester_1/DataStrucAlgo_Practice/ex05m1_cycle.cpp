#include<bits/stdc++.h>
using namespace std;
//DFS Cycle detection
bool vis[10000] = {false};

void dfs(int idx, int par, vector<int> adjm[], bool& chk){
    if(vis[idx]) {
        chk = false;
        return;
    }
    vis[idx] = true;
    for(auto x : adjm[idx]){
        if(x == par) continue;
        dfs(x, idx, adjm, chk);
    }
}
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--){
        bool ans = true;
        int v, e;
        cin >> v >> e;
        vector<int> adjm[v];

        while(e--){
            int a, b;
            cin >> a >> b;
            adjm[a].push_back(b);
            adjm[b].push_back(a);
        }
        for(int i = 0; i < v; ++i){
            if(vis[i]) continue;
            dfs(i, -1, adjm, ans);
        }
        if(ans) {
            cout <<"NO\n";
        }else cout << "YES\n";
        memset(vis, false, sizeof(vis));
    }
}