#include<bits/stdc++.h>
using namespace std;
//Intervel Selection
main(){
    int n;cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++) cin>>arr[i].first;
    for(int i=0;i<n;i++) cin>>arr[i].second;
    sort(arr,arr+n,[&](pair<int,int> a,pair<int,int> b){
        return a.second < b.second;
    });

    int count = 0;
    int endtime = 0;
    for(auto x:arr){
        if(x.first >= endtime){
            count++;
            endtime = x.second;
        }
    }

    cout<<count;
}