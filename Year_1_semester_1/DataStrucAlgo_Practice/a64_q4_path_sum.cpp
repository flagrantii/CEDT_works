#include<bits/stdc++.h>
using namespace std;

int adjm[21][21];
int arr[8];
int n,m;

bool process(int node,int count,int& chk, vector<bool>& vis){
    if(count>chk ) return false;
    if(count==chk) return true;
   
    for(int i=0;i<n;i++){
        if(adjm[node][i]!=0 && !vis[i]){
            vis[i]=true;
            if(process(i,count+adjm[node][i],chk,vis))
                return true;
            vis[i]= false;
        }
    }
    return false;
}

main(){
    cin>>n>>m;

    for(int i=0;i<8;i++){
        cin>>arr[i];
    }

    for(int i=0;i<m;i++){
        int a,b,c;cin>>a>>b>>c;
        adjm[a][b] = adjm[b][a] = c;
    }
    

    for(int j=0;j<8;j++){
        bool ans=false;
        for(int i=0;i<n;i++){
            vector<bool> visited(n);
            visited[i]=true;
            ans = process(i,0,arr[j],visited);
            if(ans) break;
        }
        
        if(ans){
            cout<<"YES"<<"\n";
        }else cout<<"NO"<<"\n";
    }
    



}