#include<bits/stdc++.h>
using namespace std;
//Fractional Knapsack
main(){
    double w;
    int n;
    cin>>w>>n;
    pair<double,double> arr[n];
    for(int i=0;i<n;i++) cin>>arr[i].first;
    for(int i=0;i<n;i++) cin>>arr[i].second;

    sort(arr,arr+n,[](pair<double,double> a,pair<double,double> b){
        return a.first/a.second > b.first/b.second;
    });

    double ans=0;
    for(auto x:arr){
        if(x.second <= w){
            ans+=x.first;
            w-=x.second;
        }else{
            ans+=x.first*(w/x.second);
            break;
        }
    }
    cout<<fixed<<setprecision(4)<<ans;
}