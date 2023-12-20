#include<bits/stdc++.h>
using namespace std;

main(){
    int r,c,t;
    cin>>r>>c>>t;
    vector<vector<int>> arr(r+2,vector<int>(c+2));
    vector<vector<int>> tem(r+2,vector<int>(c+2));
    

    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            int num;cin>>num;
            arr[i][j]=num;
        }
    }
    for(int k=0;k<t;k++){
        vector<vector<int>> tem=arr;
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                if(arr[i][j]==0){
                    if(tem[i-1][j]==1 || tem[i][j-1]==1 || tem[i+1][j]==1 || tem[i][j+1]==1){
                        arr[i][j]=1;
                    }
                }
            }
        }
    }
    // cout<<"\n";
    int count=0;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            // cout<<arr[i][j]<<" ";
            if(arr[i][j]==1){
                
                count++;
            }
        }
        // cout<<"\n";
    }
    cout<<count;
}