#include<bits/stdc++.h>
using namespace std;

int n,m;
bool ma[11][11];
bool visited[11][11];

void solve(int x,int y,string path){
    if(visited[x][y] || ma[x][y]==1){
        return;
    } 
    else if(x==n && y==m){
        cout<<path<<"\n";
        return;
    }
    visited[x][y] = true;
    else if(y+1<=n) solve(x,y+1,path+"A");
    else if(x+1<=n) solve(x+1,y,path+"B");
    else if(x-1>0) solve(x-1,y,path+"C");
    visited[x][y] = false;
}

main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>ma[i][j];
        }
    }
    solve(1,1,"");
    cout<<"DONE";
}