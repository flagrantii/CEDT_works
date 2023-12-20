#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int n,m,k;
    cin>>n>>m>>k;
    long long arr[n+1];
    arr[0]=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        arr[i] += arr[i-1];
    }
    
    while(m--){
        long long start,ans=0,money;
        cin>>start>>money;
        int l=start+1;
        int r=n;
        while(l<=r){
            int mid = (r+l)/2;
            long long wage = (arr[mid]-arr[start]) + (mid-start)*k;
            if(wage <= money){
                ans = arr[mid]-arr[start];
                l = mid+1;
            }else r = mid-1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
// 5 5 0
// 1 2 3 4 5
// 1 5
// 1 8
// 1 9
// 1 10
// 1 14
