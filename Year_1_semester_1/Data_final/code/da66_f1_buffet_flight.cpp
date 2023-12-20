#include<bits/stdc++.h>
using namespace std;

const int INF = 2e9;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> ci[n],co[n],d(n,-1);
    vector<vector<int>> cost(n);
    for(auto &i : ci) cin>>i;
    for(auto &i : co) cin>>i;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        if(a!=b) cost[a].push_back(b);
    }
    d[0]=0;
    stack<int> pq;
    pq.push(0);
    while(!pq.empty()){
        int u=pq.top();
        pq.pop();
        for(auto v:cost[u]){
            if(d[v]==-1){
                d[v]=d[u]+ci[u][v];
                pq.push(v);
            }
            else if(d[v]>d[u]+ci[u][v]){
                d[v]=d[u]+ci[u][v];
                pq.push(v);
            }
        }
    }
    for(auto i:d) cout<<i<<" ";
    return 0;
}