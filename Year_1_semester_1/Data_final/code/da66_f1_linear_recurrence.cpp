#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n;
    cin>>k>>n;
    int c[k+1];
    int R[n+1];

    for(int i=1;i<=k;i++) cin>>c[i];
    for(int i=0;i<k;i++) cin>>R[i];
    
    for(int i=k;i<=n;i++){
        for(int j=1;j<=k;j++){
            R[i]+=R[i-j]*c[j]%32717;
        }
    }
    cout<<R[n]%32717<<"\n";
   return 0;
}