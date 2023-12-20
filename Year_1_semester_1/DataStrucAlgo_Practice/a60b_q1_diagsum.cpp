#include<bits/stdc++.h>
using namespace std;
//DP Diaonal Sum concept matrix
main(){
    int n,ans=INT_MIN;
    cin>>n;
    int arr[n+1][n+1]={0};
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int num;
            cin>>num;
            arr[i][j]=arr[i-1][j-1]+num;

            for (int k=1;k<=i && k<=j;k++){
                ans = max(ans,arr[i][j]-arr[i-k][j-k]);
            }
        }
  }
  cout<<ans;
}