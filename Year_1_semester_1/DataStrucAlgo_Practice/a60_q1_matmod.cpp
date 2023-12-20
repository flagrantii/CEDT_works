#include<bits/stdc++.h>
using namespace std;

vector<int> arr(4);
int n,k;

vector<int> multiplie(vector<int> a,vector<int> b){
    vector<int> temp(4);
    temp[0] = ((a[0]*b[0])%k + (a[1]*b[2])%k)%k;
    temp[1] = ((a[0]*b[1])%k + (a[1]*b[3])%k)%k;
    temp[2] = ((a[2]*b[0])%k + (a[3]*b[2])%k)%k;
    temp[3] = ((a[2]*b[1])%k + (a[3]*b[3])%k)%k;
    return temp;
}

vector<int> power(int n){
    if(n==1) return arr;
    vector<int> store = power(n/2);
    if(n%2==0){
        return multiplie( store, store);
    }else{
        return multiplie(multiplie( store,store),arr);
    }
}

main(){
    
    cin>>n>>k;
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];

    vector<int> ans = power(n);
    for(auto x:ans){
        cout<<x<<" ";
    }


}