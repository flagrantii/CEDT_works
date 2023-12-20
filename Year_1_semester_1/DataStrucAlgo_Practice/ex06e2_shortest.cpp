#include<bits/stdc++.h>
using namespace std;
//Bellman Ford Algorithm
int main(){
    int n,e,s;
    cin>>n>>e>>s;
    tuple<int,int,int> arr[e];
    int dist[n];

    for(int i=0;i<n;i++) dist[i] = 100000;
    dist[s] = 0;
    for(int i=0;i<e;i++){
        int a,b,c;
        cin>>a>>b>>c;
        arr[i] = make_tuple(a,b,c);
    }
    int chk=0;
    for(int i=1;i<=n;i++){
        for(auto j:arr){
            int u,v,w;
            tie(u,v,w) = j;
            if(dist[v]>dist[u]+w){
                dist[v] = dist[u]+w;
                if(i==n) cout<<-1,exit(0);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<dist[i]<<" ";
    }
}