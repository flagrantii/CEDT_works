#include<bits/stdc++.h>
using namespace std;
//Dijsktra's algorithm
main(){
    int n,c;
    cin>>n>>c;
    vector<pair<int,int>> arr[n+1];
    vector<int> dist(n+1,INT_MAX);

    arr[1].push_back({2,c});
    arr[2].push_back({1,c});

    dist[1] = 0;
    dist[2] = c;

    for(int i=3;i<=n;i++){
        int x;cin>>x;
        while(x--){
            int a,b;
            cin>>a>>b;
            arr[a].push_back({i,b});
            arr[i].push_back({a,b});
        }
        
        priority_queue<pair<int,int>> pq;
        pq.push({0,1});
        while(!pq.empty()){
            int u = pq.top().first;
            int v = pq.top().second;
            pq.pop();

            for(auto j:arr[v]){
                int x = j.first;
                int w = j.second;
                if(dist[x]>=(dist[v])+w){
                    dist[x] = dist[v]+w;
                    pq.push({-dist[x],x});
                }
            }
        }
        cout<<dist[2]<<" ";
    }
}