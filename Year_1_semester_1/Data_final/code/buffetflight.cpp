#include<bits/stdc++.h>
using namespace std;

main(){
    int m,n;
    cin>>n>>m;
    vector<int> ci(n),co(n),d(n,-1);
    vector<vector<int>> cost(n);

    for(auto &i : ci)cin >> i;
    for(auto &i : co)cin >> i;
    while(m--){
        int x,y;
        cin >> x >> y;
        if(x!=y) cost[x].push_back(y);
    }
    d[0] = 0;
    priority_queue<int> pq;
    pq.push(0);
    while(!pq.empty()){
        auto node = pq.top(); pq.pop();
        for(auto &i : cost[node]){
            if(d[i] > d[node] + ci[i] + co[node]){
                d[i] = d[node] + ci[i] + co[node];
                pq.push(i);
            }else if(d[i] == -1){
                d[i] = d[node] + ci[i] + co[node];
                pq.push(i);
            }
        }
    }
    for(auto &i :d) cout << i << " ";
}