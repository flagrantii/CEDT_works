#include<bits/stdc++.h>
using namespace std;

main(){
    unordered_map<int,vector<int>> graph;
    int verti,edge;
    cin>>verti>>edge;
    int value[verti];

    for(int i=0;i<edge;i++){
        int a,b;
        cin>>a>>b;
        value[a] = value[b] = 1;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int color=1;
    for(auto &x : graph){
        for(auto &y : x.second){
            if(value[x.first] == value[y]){
                value[y]++;
                if(color < value[y]){
                    color = value[y];
                }
            }
        }
    }
    int ans = color;
    for(auto &x : graph){
        for(auto &y : x.second){
            if(value[x.first] == value[y]){
                value[y]++;
                if(color < value[y]){
                    color = value[y];
                }
            }
        }
    }
    for(int i=0;i<verti;i++){
        cout<<i<<" "<<value[i]<<"\n";
    }
    if(ans == color-1) ans--;
    cout<<ans;
}