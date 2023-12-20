#include<bits/stdc++.h>
using namespace std;

main(){
    int t;cin>>t;
   
    while(t--){
        int n;cin>>n;
        double arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        int ans=0;
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    arr[i][j] = max(arr[i][j], arr[i][k]*arr[k][j]);
                    if(arr[j][j]>1){
                        ans = 1;
                        break;
                    }
                }
                if(ans)break;
            }
            if(ans)break;
        }
        if(ans)cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}